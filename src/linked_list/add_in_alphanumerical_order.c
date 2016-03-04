/*
** add_in_alphanumerical_order.c for addin in /hom
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Thu Mar  3 13:19:19 2016 Clement Peau
** Last update Fri Mar  4 15:41:49 2016 Clement Peau
*/

#include "linked_list.h"
#include "string.h"

void	add_in_alphanumerical_order(t_tetriminos *list, t_tetriminos *link)
{
  t_tetriminos	*tmp;

  tmp = list;
  if (list->next == NULL)
    {
      link->next = list->next;
      list->next = link;
    }
  else
    {
       while ((tmp->next != NULL) && my_strcmp(link->name, tmp->next->name) < 0)
	  tmp = tmp->next;
      link->next = tmp->next;
      tmp->next  = link;
    }
}
