/*
** show_list.c for showlist in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Thu Mar  3 14:26:49 2016 Clement Peau
** Last update Thu Mar  3 15:46:11 2016 Clement Peau
*/

#include "linked_list.h"

void	show_list(t_tetriminos *list)
{
  t_tetriminos *tmp;

  tmp = list->next;
  while (tmp != NULL)
    {
      PUTSTR(tmp->name);
      tmp = tmp->next;
    }
}
