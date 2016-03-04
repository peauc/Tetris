/*
** get_lenght_of_list.c for getlenght in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Mar  4 13:30:27 2016 Clement Peau
** Last update Fri Mar  4 15:47:36 2016 Clement Peau
*/

#include "linked_list.h"

int		get_lenght_of_list(t_tetriminos *list)
{
  int		i;
  t_tetriminos	*tmp;

  tmp = list;
  i = 0;
  while (tmp->next != NULL)
    {
      tmp = tmp->next;
      i++;
    }
  return (i);
}
