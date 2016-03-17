/*
** two_word_option.c for twoword in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Tue Mar  8 01:27:47 2016 Clement Peau
** Last update Thu Mar 17 14:00:51 2016 Clement Peau
*/

#include "options.h"

int	my_strcmp_modified_two(char *dico, char *test)
{
  int		i;

  i = 0;
  while (dico[i] != 0)
    {
      if (dico[i] != test[i])
	return (1);
      i++;
    }
  if (dico[i] == 0 && test[i] == 0)
    return (0);
  else
    return (1);
}

static int	load_function_pointer(t_pointer *fctpointer)
{
  if ((fctpointer->pointer = malloc(8 * 11)) == NULL)
    return (1);
  fctpointer->pointer[0] = change_level;
  fctpointer->pointer[1] = key_left_modifier;
  fctpointer->pointer[2] = key_right_modifier;
  fctpointer->pointer[3] = turn_key_modifier;
  fctpointer->pointer[4] = drop_key_modifier;
  fctpointer->pointer[5] = quit_key_modifier;
  fctpointer->pointer[6] = pause_key_modifier;
  fctpointer->pointer[7] = next_desactivator;
  fctpointer->pointer[8] = debug_activator;
  fctpointer->pointer[9] = NULL;
  return (0);
}

char	**load_dico_two()
{
  int		i;
  char		**dico;

  i = 0;
  if ((dico = malloc(sizeof(char *) * 10)) == NULL)
    return (NULL);
  while (i < 10)
    {
      if ((dico[i] = malloc(sizeof(char) * 20)) == NULL)
	return (NULL);
      i++;
    }
  my_strcpy(dico[0], "-l");
  my_strcpy(dico[1], "-kl");
  my_strcpy(dico[2], "-kr");
  my_strcpy(dico[3], "-kt");
  my_strcpy(dico[4], "-kd");
  my_strcpy(dico[5], "-kq");
  my_strcpy(dico[6], "-kp");
  my_strcpy(dico[7], "-w");
  my_strcpy(dico[8], "-d");
  dico[9] = NULL;
  return (dico);
}

int	two_word_options(t_game *game, char **av)
{
  t_pointer	fct;
  int		i;
  int		j;

  j = 0;
  i = 1;
  if ((fct.dico = load_dico_two()) == NULL ||
      load_function_pointer(&fct) == 1)
    return (1);
  while (av[i])
    {
      while (fct.dico[j])
	{
	  if (my_strcmp_modified_two(fct.dico[j], av[i]) == 0)
	    if ((fct.pointer[j](game, av, i)) == 1)
	      return (1);
	  j++;
	}
      i++;
      j = 0;
    }
  free_fct_pointer(&fct);
  return (0);
}
