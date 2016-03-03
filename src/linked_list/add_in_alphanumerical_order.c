/*
** add_in_alphanumerical_order.c for addin in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Thu Mar  3 13:19:19 2016 Clement Peau
** Last update Thu Mar  3 16:12:41 2016 Clement Peau
*/

#include "linked_list.h"

void	add_in_alphanumerical_order(t_tetriminos *list, t_tetriminos *link)
{
  t_tetriminos	*tmp;

  tmp = list->next;
  if (list->next == NULL)
    {
      link->next = list->next;
      list->next = link;
    }
  else
    {
      printf("strcmp %s %s = %d vs %d\n", tmp->name, link->name, my_strcmp(tmp->name, link->name), my_strcmp(tmp->name, link->name));
      while (my_strcmp(link->name, tmp->name) < 0 && (link->next != NULL))
	tmp = tmp->next;
      link->next = tmp->next;
      tmp->next  = link;
    }
}
