/*
** initialize_keys.c for keys in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Mar  4 19:21:02 2016 Clement Peau
** Last update Fri Mar  4 20:23:51 2016 Clement Peau
*/

#include "options.h"

int	malloc_every_field(char **tab, int nb)
{
  int	i;

  i = 0;
  while (i < nb)
    {
      if ((tab[i] = malloc(sizeof(char) * 10)) == NULL)
	return (1);
      i++;
    }
  tab[i] = NULL;
  return (0);
}

char	**initialize_keys()
{
  char	**keys;

  if ((keys = malloc(sizeof(char *) * NB_KEYS)) == NULL ||
      malloc_every_field(keys, NB_KEYS - 1) == 1)
    return (NULL);

  return (keys);
}
