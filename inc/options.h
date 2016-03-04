/*
** options.h for options.h in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Mar  4 12:51:48 2016 Clement Peau
** Last update Fri Mar  4 13:10:31 2016 Clement Peau
*/

#ifndef _OPTION_H_
# define _OPTION_H_

/*
** HEADERS
*/
# include "tetris.h"
# include "parsing.h"
# include "linked_list.h"
# include "aff.h"
typedef struct s_tetriminos t_tetriminos;
/*
**FUNCTIONS
*/
int	options(t_tetriminos *);
void	debug_mode(t_tetriminos *);

#endif /* !_OPTION_H_ */
