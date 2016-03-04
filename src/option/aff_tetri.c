/*
** aff_tetri.c for afftetri in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Mar  4 13:18:03 2016 Clement Peau
** Last update Fri Mar  4 14:04:11 2016 Clement Peau
*/

#include "options.h"

void	aff_tetri(t_tetriminos *list)
{
  t_tetriminos *tmp;

  tmp = list;
  my_printf("%d", get_lenght_of_list(list));
  while (tmp->next != NULL)
    {
      tmp = tmp->next;
    }
}
