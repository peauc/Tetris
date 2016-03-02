/*
** tetris.h for tetris in /home/thoma_c/rendu/PSU_2015_tetris/include
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Wed Feb 24 15:30:55 2016 Clement Thomas
** Last update Wed Mar  2 18:25:10 2016 Clement Peau
*/

#ifndef TETRIS_H_

# define TETRIS_H_
# define PUTERROR(x)	write(2, x, my_strlen(x))
# define PUTSTR(x)	write(1, x, my_strlen(x))
/*
**SYSTEM LIBS
*/
#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>

/*
**PERSONNAL HEADERS
*/
#include "linked_list.h"
#include "parsing.h"

/*
**UTILS
*/
int	my_strlen(char *);
int	getnbr(char *);

/*
**ERRORS
*/
int	error_int(char *, int);

void	aff_tetris(int, SCREEN *);

#endif /* !TETRIS_H_ */
