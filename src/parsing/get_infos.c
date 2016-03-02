/*
** get_infos.c for get_info in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Tue Mar  1 20:53:48 2016 Clement Peau
** Last update Wed Mar  2 18:24:40 2016 Clement Peau
*/

#include "parsing.h"

int	get_first_line(t_tetriminos *list, char *first_line)
{
  int	i;

  i = 0;
  while (first_line[i++] == 32);
  list->size[0] = getnbr(first_line);
  while (first_line[i] != 32 && first_line[i++] != 0);
  list->size[1] = getnbr(first_line + (i++ + 1));
  while (first_line[i] != 32 && first_line[i++] != 0);
  list->color = getnbr(first_line + (i + 1));
  return (0);
}
