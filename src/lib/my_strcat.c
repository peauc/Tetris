/*
** my_strcat.c for strcat in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Mon Feb 29 20:23:12 2016 Clement Peau
** Last update Mon Feb 29 21:04:21 2016 Clement Peau
*/

#include "tetris.h"

char	*my_strcat_name(char *tetriminos, char *name)
{
  char	*new_name;
  int	i;
  int	j;

  i = -1;
  j = -1;
  if ((new_name = malloc(my_strlen(tetriminos) + my_strlen(name) + 1)) == NULL)
    return (NULL);
  while (tetriminos[++i])
      new_name[++j] = tetriminos[i];
  i = -1;
  while (name[++i])
      new_name[++j] = name[i];
  new_name[++j] = 0;
  return (new_name);
}
