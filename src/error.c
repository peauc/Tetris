/*
** error.c for bite in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Tue Mar  1 14:42:41 2016 Clement Peau
** Last update Tue Mar  8 18:18:38 2016 Clement Peau
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
  if (list->size[0] != get_length_of_file(filename))
    {
      list->is_error = 1;
    }
  while (list->tetriminos[i] != NULL)
    {
      if (my_strlen(list->tetriminos[i]) != list->size[1])
	{
	  list->is_error = 1;
	}
      i++;
    }
}
