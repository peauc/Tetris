/*
** aff_tetri.c for afftetri in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Mar  4 13:18:03 2016 Clement Peau
** Last update Sun Mar  6 16:35:40 2016 Clement Peau
*/

#include "options.h"

void	aff_tetri(t_tetriminos *list)
{
  t_tetriminos *tmp;

  tmp = list->next;
  my_printf("Tetriminos : %d\n", get_lenght_of_list(tmp));
  while (tmp->next != NULL)
    {
      if (tmp->is_error == 1)
	my_printf("Tetriminos : Name %s : Error\n", tmp->name);
      else
	{
	  my_printf("Tetriminos : Name %s : Size %d*%d : Color %d :\n",
		    tmp->name, tmp->size[0], tmp->size[1], tmp->color);
	  show_tab(tmp->tetriminos);
	}
      	  tmp = tmp->next;
    }
}
