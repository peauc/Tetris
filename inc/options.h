/*
** options.h for options.h in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Mar  4 12:51:48 2016 Clement Peau
** Last update Mon Mar  7 14:59:30 2016 Clement Peau
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

typedef struct	s_game
{
  char		**array;
  char		next;
  int		level;
  int		size[2];
  t_tetriminos	*list;
}		t_game;

typedef struct	s_pointer
{
  char		**dico;
  int		(**pointer)(t_game *, char **, int);
}		t_pointer;


/*
**FUNCTIONS
*/
int	one_word_options(t_game *, char **);
int	options(t_game *, char **);
char	**initialize_keys();
void	debug_mode(t_game *);
void	aff_tetri(t_tetriminos *);
void	aff_key();

/*
** FUNCTION POINTER
*/
int	joyeuse_fonction(t_game *, char **, int);
int	level_modifier(t_game *, char **, int);

#endif /* !_OPTION_H_ */
