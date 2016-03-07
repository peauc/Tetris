/*
** aff_next.c for aff_next in /home/thoma_c/rendu/PSU_2015_tetris/src
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Fri Mar  4 14:56:48 2016 Clement Thomas
** Last update Mon Mar  7 17:47:33 2016 Clement Thomas
*/

#include "tetris.h"

void		my_screen(WINDOW *origin, t_board *board, t_tetriminos *list)
{
  aff_logo_next();
  aff_game(board->game);
  aff_board(board, board->data_board);
  next_tetri(board->next, list);
  timer(board->data_board, board);
  if (board->change_tetri == 0)
    {
      board->nb = nb_tetriminos(list);
      board->change_tetri = 1;
    }
  aff_next_tetri(board->next, list, board->nb);
  usleep(1000);
}

int	screen_size(WINDOW *origin)
{
  if (getmaxy(origin) < 25)
    return (1);
  else if (getmaxx(origin) < 58)
    return (1);
  return (0);
}
