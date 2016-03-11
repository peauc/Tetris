/*
** options.h for options.h in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Mar  4 12:51:48 2016 Clement Peau
** Last update Fri Mar 11 15:57:03 2016 Clement Peau
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
  char		help;
  char		debug;
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
int	two_word_options(t_game *, char **);
int	one_word_options(t_game *, char **);
int	options(t_game *, char **);
char	**initialize_keys();
void	debug_mode(t_game *);
void	aff_tetri(t_tetriminos *);
void	aff_key();
void	help_mode(t_game *, char *);
void	free_fct_pointer(t_pointer *);

/*
** FUNCTION POINTER
*/
int	debug_activator(t_game *, char **, int);
int	next_desactivator(t_game *, char **, int);
int	quit_key_modifier(t_game *, char **, int);
int	pause_key_modifier(t_game *, char **, int);
int	turn_key_modifier(t_game *, char **, int);
int	drop_key_modifier(t_game *, char **, int);
int	key_left_modifier(t_game *, char **, int);
int	key_right_modifier(t_game *, char **, int);
int	change_level(t_game *, char **, int);
int	next_modifier(t_game *, char **, int);
int	joyeuse_fonction(t_game *, char **, int);
int	key_drop_modifier(t_game *, char **, int);
int	left_key_modifier(t_game *, char **, int);
int	right_key_modifier(t_game *, char **, int);
int	key_turn_modifier(t_game *, char **, int);
int	level_modifier(t_game *, char **, int);
int	key_pause_modifier(t_game *, char **, int);
int	key_quit_modifier(t_game *, char **, int);
int	map_size_modifier(t_game *, char **, int);
int	debug_modifier(t_game *, char **, int);
int	aff_help(t_game *, char **, int);

#endif /* !_OPTION_H_ */
