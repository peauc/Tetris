/*
** one_word_option.c for optiosn in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Sun Mar  6 19:03:42 2016 Clement Peau
** Last update Tue Mar  8 15:00:11 2016 Clement Peau
*/

#include "options.h"

static	int	my_strcmp_modified(char *dico, char *test)
{
  int		i;

  i = 0;
  while (dico[i] != 0)
    {
      if (dico[i] != test[i])
	return (1);
      i++;
    }
  return (0);
}

int		joyeuse_fonction(t_game *game, char **av, int i)
{
  my_printf("je suis une joyeuse_fonction\n");
  return (0);
}

static char	**load_dico()
{
  int		i;
  char		**dico;

  i = 0;
  if ((dico = malloc(sizeof(char *) * 12)) == NULL)
    return (NULL);
  while (i < 11)
    {
      if ((dico[i] = malloc(sizeof(char) * 20)) == NULL)
	return (NULL);
      i++;
    }
  my_strcpy(dico[0], "--level=");
  my_strcpy(dico[1], "--key-left=");
  my_strcpy(dico[2], "--key-right=");
  my_strcpy(dico[3], "--key-turn=");
  my_strcpy(dico[4], "--key-drop=");
  my_strcpy(dico[5], "--key-quit=");
  my_strcpy(dico[6], "--key-pause=");
  my_strcpy(dico[7], "--map-size=");
  my_strcpy(dico[8], "--without-next");
  my_strcpy(dico[9], "--debug");
  my_strcpy(dico[10], "--help");
  dico[11] = NULL;
  return (dico);
}

static	int	load_fonction_ptr(t_pointer *fctpointer)
{
  if ((fctpointer->pointer = malloc(8 * 12)) == NULL)
    return (1);
  fctpointer->pointer[0] = level_modifier;
  fctpointer->pointer[1] = left_key_modifier;
  fctpointer->pointer[2] = right_key_modifier;
  fctpointer->pointer[3] = key_turn_modifier;
  fctpointer->pointer[4] = key_drop_modifier;
  fctpointer->pointer[5] = key_quit_modifier;
  fctpointer->pointer[6] = key_pause_modifier;
  fctpointer->pointer[7] = map_size_modifier;
  fctpointer->pointer[8] = next_modifier;
  fctpointer->pointer[9] = debug_modifier;
  fctpointer->pointer[10] = aff_help;
  fctpointer->pointer[11] = NULL;
  return (0);
}

int		one_word_options(t_game *game, char **av)
{
  t_pointer	fct;
  int		i;
  int		j;

  i = 1;
  if  ((fct.dico = load_dico()) == NULL ||
       load_fonction_ptr(&fct) == 1)
    return (1);
  while (av[i])
    {
      j = 0;
      while (fct.dico[j] != NULL)
	{
	  if (my_strcmp_modified(fct.dico[j], av[i]) == 0)
	    if ((fct.pointer[j](game, av, i)) == 1)
	      return (write(2, "Wrong parameter\n", 16) - 15);
	  j++;
	}
      i++;
    }
  return (0);
}
