/*
** aff_next.c for aff_next in /home/thoma_c/rendu/PSU_2015_tetris/src
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Fri Mar  4 14:56:48 2016 Clement Thomas
** Last update Sat Mar  5 15:15:57 2016 Clement Thomas
*/

#include "tetris.h"

void	test(WINDOW *origin, t_board *board)
{
  aff_logo_next();
  aff_game(board->game);
  aff_board(board, board->data_board);
  next_tetri(board->next);
  timer(board->data_board, board);
}

int	screen_size(WINDOW *origin)
{
  if (getmaxy(origin) < 25)
    return (1);
  else if (getmaxx(origin) < 58)
    return (1);
  return (0);
}
