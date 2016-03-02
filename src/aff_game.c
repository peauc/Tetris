/*
** aff_game.c for aff_game in /home/thoma_c/rendu/PSU_2015_tetris/src
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Tue Mar  1 23:01:35 2016 Clement Thomas
** Last update Wed Mar  2 20:15:56 2016 Clement Thomas
*/

#include "tetris.h"

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

  new_win = subwin(origin, 12, 23, 1, 47);
  wborder(new_win, '|', '|', '-', '-', '/', '\\', '\\', '/');
  next_tetri(origin);
}
