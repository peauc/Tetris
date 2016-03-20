/*
** error.c for bite in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Tue Mar  1 14:42:41 2016 Clement Peau
** Last update Sun Mar 20 15:32:03 2016 Clement Peau
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
  int	count;
  int	target;

  i = 0;
  target = 0;
  count = 0;
  if (list->size[1] != get_length_of_file(filename) - 1 )
      list->is_error = 1;
  while (list->tetriminos[i] != NULL)
    {
      if (my_strlen(list->tetriminos[i]) > list->size[0])
	  list->is_error = 1;
      if (my_strlen(list->tetriminos[i]) == list->size[0])
	target++;
      i++;
    }
  if (list->color > 7 || list->color < 0 || list->size[0] == 0 ||
      list->size[1] == 0 || target == 0)
    list->is_error = 1;
}
