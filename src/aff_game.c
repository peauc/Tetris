/*
** aff_game.c for aff_game in /home/thoma_c/rendu/PSU_2015_tetris/src
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Tue Mar  1 23:01:35 2016 Clement Thomas
** Last update Thu Mar  3 18:19:39 2016 Clement Thomas
*/

#include "tetris.h"

void	timer(double tmp, WINDOW *origin)
{
  double time_now;
  double gaming;
  int	 minute;

  minute = 0;
  time_now = time(NULL);
  gaming = time_now - tmp;
  if (gaming == 60)
    {

      minute++;
    }
  mvwprintw(origin, 14, 16, "%d:", minute);
  mvwprintw(origin, 14, 18, "%.0f", gaming);
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
