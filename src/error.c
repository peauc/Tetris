/*
** error.c for bite in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Tue Mar  1 14:42:41 2016 Clement Peau
** Last update Fri Mar  4 15:56:02 2016 Clement Peau
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
      my_printf("error in %s, %d\n", __FILE__, __LINE__);
      list->is_error = 1;
    }
  while (list->tetriminos[i] != NULL)
    {
      if (my_strlen(list->tetriminos[i]) != list->size[1])
	{
	  my_printf("error in %s, %d\n", __FILE__, __LINE__);
	  list->is_error = 1;
	}
      i++;
    }
}
