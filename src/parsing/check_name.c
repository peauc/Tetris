/*
** check_name.c for checkname in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Thu Mar  3 10:47:08 2016 Clement Peau
** Last update Thu Mar  3 12:00:39 2016 Clement Peau
*/

#include "parsing.h"

int	check_name(char *name)
{
  char	*str;
  int	i;
  int	j;

  i = my_strlen(name) - 1;
  str = ".tetrimino";
  j = my_strlen(str) - 1;
  while (j >= 0)
    {
      if (str[j--] != name[i--])
	return (1);
    }
  return (0);
}
