/*
** aff_game.c for aff_game in /home/thoma_c/rendu/PSU_2015_tetris/src
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Tue Mar  1 23:01:35 2016 Clement Thomas
** Last update Fri Mar  4 15:55:18 2016 Clement Thomas
*/

#include "tetris.h"

void	timer(WINDOW *origin, t_board *board)
{
  double time_now;

  wclear(origin);
  time_now = time(NULL);
  if (time_now - board->timer_second == 60)
    {
      board->timer_second = time(NULL);
      board->timer_minutes++;
    }
  mvwprintw(origin, 8, 16, "%d:", board->timer_minutes);
  mvwprintw(origin, 8, 18, "%.0f", time_now - board->timer_second);
}

void	next_tetri(WINDOW *origin)
{
  WINDOW *new_win;

  new_win = subwin(origin, 4, 9, 1, 48);
  wborder(new_win, '|', '|', '-', '-', '/', '\\', '\\', '/');
  mvwprintw(new_win, 0, 1, "Next");
}

void	aff_game(WINDOW *origin)
{
  WINDOW *new_win;

  new_win = subwin(origin, 22, 12, 0, 35);
  wborder(new_win, '|', '|', '-', '-', '/', '\\', '\\', '/');
  next_tetri(origin);
}
