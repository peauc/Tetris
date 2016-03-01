/*
** linked_list.h for tetriminos in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Mon Feb 29 21:10:02 2016 Clement Peau
** Last update Tue Mar  1 14:40:22 2016 Clement Peau
*/

#ifndef _LINKED_LIST_H_
# define _LINKED_LIST_H_

# include "tetris.h"

typedef struct	s_tetriminos
{
  struct s_tetriminos	*next;
  char			**tetriminos;
  char			*name;
  int			size[2];
  int			color;
  int			position;

}		t_tetriminos;

t_tetriminos	*create();

#endif /* !_LINKED_LIST_H_ */
