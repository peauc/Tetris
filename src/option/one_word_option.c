/*
** one_word_option.c for optiosn in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Sun Mar  6 19:03:42 2016 Clement Peau
** Last update Sun Mar  6 20:38:33 2016 Clement Peau
*/

#include "options.h"

int	joyeuse_fonction()
{
  my_printf("je suis une joyeuse_fonction\n");
  return (1);
}

int	load_dico(char **dico)
{
  int	i;

  i = 0;
  while (i < 10)
    {
      if ((dico[i] = malloc(sizeof(char) * 20)) == NULL)
	return (1);
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
  return (0);
}

int	one_word_options(t_game *game, char **av)
{
  int	(*single_worded_param[10])(t_game *, char *);
  char	**dico;
  int	i;

  i = 0;
  if ((dico = malloc(sizeof(char *) * 12)) == NULL ||
      (load_dico(dico) == 1))
    return (1);
  single_worded_param[0] = joyeuse_fonction;
  single_worded_param[1] = joyeuse_fonction;
  single_worded_param[2] = joyeuse_fonction;
  single_worded_param[3] = joyeuse_fonction;
  single_worded_param[4] = joyeuse_fonction;
  single_worded_param[5] = joyeuse_fonction;
  single_worded_param[6] = joyeuse_fonction;
  single_worded_param[7] = joyeuse_fonction;
  single_worded_param[8] = joyeuse_fonction;
  single_worded_param[9] = joyeuse_fonction;
  return (0);
}
