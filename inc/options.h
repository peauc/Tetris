/*
** options.h for options.h in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Mar  4 12:51:48 2016 Clement Peau
** Last update Sun Mar  6 14:44:29 2016 Clement Peau
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
# include <curses.h>
# include <term.h>


typedef enum	s_enum_key
{
  LEFT_KEY,
  RIGHT_KEY,
  KEY_TURN,
  KEY_DROP,
  KEY_QUIT,
  KEY_PAUSE,
  NB_KEYS
}		t_enum_keys;

typedef struct s_tetriminos t_tetriminos;

/*
**FUNCTIONS
*/
char	**options(t_tetriminos *, char **);
char	**initialize_keys();
void	debug_mode(t_tetriminos *, char **);
void	aff_tetri(t_tetriminos *);
void	aff_key();

#endif /* !_OPTION_H_ */
