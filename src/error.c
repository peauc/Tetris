/*
** error.c for bite in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Tue Mar  1 14:42:41 2016 Clement Peau
** Last update Thu Mar  3 10:38:12 2016 Clement Peau
*/

#include "tetris.h"

int	error_int(char *str, int nb)
{
  PUTERROR(str);
  return (nb);
}

void	check_size_error(t_tetriminos *list, char *filename)
{
  int	i;

  i = 0;
  if (list->size[1] != get_length_of_file(filename))
    list->is_error = 1;
  while (list->tetriminos[i] != NULL)
    {
      if (my_strlen(list->tetriminos[i]) != list->size[0])
	list->is_error = 1;
      i++;
    }
}
