/*
** aff.h for aff in /home/thoma_c/rendu/PSU_2015_tetris
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Tue Mar  1 22:59:22 2016 Clement Thomas
** Last update Mon Mar  7 17:26:11 2016 Clement Thomas
*/

#ifndef AFF_H_
# define AFF_H_

typedef	struct	s_tetriminos t_tetriminos;

typedef struct	s_board
{
  int		hight_score;
  int		score;
  int		line;
  int		level;
  int		timer;
  double       	timer_second;
  int		timer_minutes;
  WINDOW	*data_board;
  WINDOW	*game;
  WINDOW	*next;
  int		size_x;
  int		size_y;
  int		change_tetri;
  int		nb;
}		t_board;

void		aff_game(WINDOW *);
int		nb_tetriminos(t_tetriminos *);
t_tetriminos	*which_tetriminos(t_tetriminos *, int);
void		aff_next_tetri(WINDOW *, t_tetriminos *, int);
void		aff_tetris(int, t_board *, t_tetriminos *);
void		aff_board(t_board *, WINDOW *);
void		aff_logo();
void		data_board_initialize(t_board *, t_tetriminos *);
void		my_screen(WINDOW *, t_board *, t_tetriminos *);
int		screen_size(WINDOW *);
void		timer(WINDOW *, t_board *);
void		next_tetri(WINDOW *, t_tetriminos *);
void		aff_game(WINDOW *);

#endif /* !AFF_H_ */
