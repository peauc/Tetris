
/*
** my_strdup.c for lol in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Sat Mar  5 14:00:59 2016 Clement Peau
** Last update Sat Mar  5 14:11:00 2016 Clement Peau
*/

#include "tetris.h"

char	*my_strdup(char *str)
{
  int	i;
  int	j;
  char	*dup;

  j = 0;
  i = my_strlen(str);
  if ((dup = malloc((i + 1) * sizeof(char))) == NULL)
    return (NULL);
  while (str[i++])
    dup[i] = str[i];
  dup[i] = 0;
  return (dup);
}
