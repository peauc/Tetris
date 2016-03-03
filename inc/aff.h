/*
** aff.h for aff in /home/thoma_c/rendu/PSU_2015_tetris
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Tue Mar  1 22:59:22 2016 Clement Thomas
** Last update Thu Mar  3 09:54:40 2016 Clement Peau
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
}		t_board;

void	data_board_initialize(t_board *);
void	aff_game(WINDOW *);

#endif /* !AFF_H_ */
