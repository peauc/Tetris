/*
** initialize_keys.c for keys in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Mar  4 19:21:02 2016 Clement Peau
** Last update Thu Mar 17 13:56:26 2016 Clement Peau
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
  if ((keys = malloc(sizeof(char *) * (NB_KEYS + 1))) == NULL ||
      malloc_every_field(keys, NB_KEYS) == 1 ||
      setupterm(NULL, 0, &i) == -1)
    return (NULL);
  my_strcpy(keys[KEY_PAUSE], " ");
  my_strcpy(keys[KEY_QUIT], "q");
  if (((keys[KEY_TURN] = my_strdup(tigetstr("kcuu1"))) == NULL) ||
      ((keys[KEY_DROP] = my_strdup(tigetstr("kcud1"))) == NULL) ||
      ((keys[LEFT_KEY] = my_strdup(tigetstr("kcub1"))) == NULL) ||
      ((keys[RIGHT_KEY] = my_strdup(tigetstr("kcuf1"))) == NULL))
    return (NULL);
  return (keys);
}
