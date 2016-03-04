/*
** options.h for options.h in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Mar  4 12:51:48 2016 Clement Peau
** Last update Fri Mar  4 19:33:50 2016 Clement Peau
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
void	debug_mode(t_tetriminos *);
void	aff_tetri(t_tetriminos *);
void	aff_key();

#endif /* !_OPTION_H_ */
