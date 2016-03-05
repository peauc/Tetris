/*
** aff.h for aff in /home/thoma_c/rendu/PSU_2015_tetris
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Tue Mar  1 22:59:22 2016 Clement Thomas
** Last update Sat Mar  5 14:41:11 2016 Clement Thomas
*/

#ifndef AFF_H_
# define AFF_H_

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
}		t_board;

void	data_board_initialize(t_board *);
void	aff_game(WINDOW *);

#endif /* !AFF_H_ */
