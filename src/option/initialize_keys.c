/*
** initialize_keys.c for keys in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Mar  4 19:21:02 2016 Clement Peau
** Last update Fri Mar 11 16:38:21 2016 Clement Peau
*/

#include "options.h"

int	malloc_every_field(char **array, int nb)
{
  int	i;

  i = 0;
  while (i < nb)
    {
      if ((array[i] = malloc(sizeof(char) * 10)) == NULL)
	return (1);
      i++;
    }
  array[nb] = NULL;
  return (0);
}

char	**initialize_keys()
{
  char	**keys;
  int	i;

  i = 0;
  setupterm(NULL, 0, &i);
  if ((keys = malloc(sizeof(char *) * (NB_KEYS + 1))) == NULL ||
      malloc_every_field(keys, NB_KEYS) == 1)
    return (NULL);
  my_strcpy(keys[KEY_PAUSE], " ");
  my_strcpy(keys[KEY_QUIT], "q");
  if ((keys[KEY_TURN] = tigetstr("kcuu1")) == 0 ||
      (keys[KEY_DROP] = tigetstr("kcud1")) == 0 ||
      (keys[LEFT_KEY] = tigetstr("kcub1")) == 0 ||
      (keys[RIGHT_KEY] = tigetstr("kcuf1")) == 0)
    return (NULL);
  return (keys);
}
