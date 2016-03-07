/*
** one_word_option.c for optiosn in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Sun Mar  6 19:03:42 2016 Clement Peau
** Last update Mon Mar  7 15:19:56 2016 Clement Peau
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
  return (1);
}

static char	**load_dico()
{
  int		i;
  char		**dico;
  i = 0;
  if ((dico = malloc(sizeof(char *) * 11)) == NULL)
    return (NULL);
  while (i < 10)
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
  dico[10] = NULL;
  return (dico);
}

static	int	load_fonction_ptr(t_pointer *fctpointer)
{
  if ((fctpointer->pointer = malloc(8 * 10)) == NULL)
    return (1);
  fctpointer->pointer[0] = level_modifier;
  fctpointer->pointer[1] = joyeuse_fonction;
  fctpointer->pointer[2] = joyeuse_fonction;
  fctpointer->pointer[3] = joyeuse_fonction;
  fctpointer->pointer[4] = joyeuse_fonction;
  fctpointer->pointer[5] = joyeuse_fonction;
  fctpointer->pointer[6] = joyeuse_fonction;
  fctpointer->pointer[7] = joyeuse_fonction;
  fctpointer->pointer[8] = joyeuse_fonction;
  fctpointer->pointer[9] = joyeuse_fonction;
  return (0);
}

int		one_word_options(t_game *game, char **av)
{
  t_pointer	fct;
  int		i;
  int		j;

  j = 0;
  i = 0;
  if  ((fct.dico = load_dico()) == NULL ||
       load_fonction_ptr(&fct) == 1)
    return (1);
  while (av[i])
    {
      while (fct.dico[j] != NULL)
	{
	  printf("my_strcmp_modified(%s, %s) = %d\n", fct.dico[j], av[i], my_strcmp_modified(fct.dico[j], av[i]));
	  if (my_strcmp_modified(fct.dico[j], av[i]) == 0)
	    fct.pointer[j](game, av, i);
	  j++;
	}
      i++;
      j = 0;
    }
  return (0);
}
