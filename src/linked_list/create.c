/*
** create.c for create in /home/peau_c/rendu/PSU/PSU_2015_tetris/src/linked_list
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Mon Feb 29 22:38:10 2016 Clement Peau
** Last update Tue Mar  1 14:34:36 2016 Clement Peau
*/

#include "linked_list.h"

t_tetriminos	*create()
{
  t_tetriminos	*root;

  if ((root = malloc(sizeof(t_tetriminos))) == NULL)
    return (NULL);
  root->next = NULL;
  root->name = "JE_SUIS_ROOT";
  return (root);
}
