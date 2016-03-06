/*
** aff.h for aff in /home/thoma_c/rendu/PSU_2015_tetris
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Tue Mar  1 22:59:22 2016 Clement Thomas
** Last update Sun Mar  6 18:23:59 2016 Clement Thomas
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
}		t_board;

void		data_board_initialize(t_board *);
void		aff_game(WINDOW *);
int		nb_tetriminos(t_tetriminos *);
t_tetriminos	*which_tetriminos(t_tetriminos *);
void		aff_next_tetri(WINDOW *, t_tetriminos *);

#endif /* !AFF_H_ */
