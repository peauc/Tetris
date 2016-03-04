/*
** linked_list.h for tetriminos in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Mon Feb 29 21:10:02 2016 Clement Peau
** Last update Thu Mar  3 18:49:46 2016 Clement Peau
 */

#ifndef _LINKED_LIST_H_
# define _LINKED_LIST_H_

/*
** USER DEFINED LIB
*/
# include "tetris.h"
# include "parsing.h"

typedef struct	s_tetriminos
{
  struct s_tetriminos	*next;
  char			**tetriminos;
  char			*name;
  int			size[2];
  int			color;
  int			position;
  int			is_error;
}		t_tetriminos;

t_tetriminos	*create();
void		add_in_alphanumerical_order(t_tetriminos *, t_tetriminos *);
void		show_list(t_tetriminos *);

#endif /* !_LINKED_LIST_H_ */
