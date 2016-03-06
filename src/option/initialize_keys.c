/*
** initialize_keys.c for keys in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Mar  4 19:21:02 2016 Clement Peau
** Last update Sun Mar  6 15:05:14 2016 Clement Peau
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
  printf("i = %d\n", i);
  array[i] = NULL;
  return (0);
}

char	**initialize_keys()
{
  char	**keys;
  int	i;

  i = 0;
  setupterm(NULL, 0, &i);
  printf("nb_keys %d\n", NB_KEYS);
  if ((keys = malloc(sizeof(char *) * (NB_KEYS + 1))) == NULL ||
      malloc_every_field(keys, NB_KEYS) == 1)
    return (NULL);
  my_strcpy(keys[KEY_PAUSE], " ");
  my_strcpy(keys[KEY_QUIT], "q");
  keys[KEY_TURN] = tigetstr("kcuu1");
  keys[KEY_DROP] = tigetstr("kcud1");
  keys[LEFT_KEY] = tigetstr("clear");
  keys[RIGHT_KEY] = tigetstr("kcuf1");
  return (keys);
}
