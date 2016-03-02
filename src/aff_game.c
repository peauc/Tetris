/*
** aff_game.c for aff_game in /home/thoma_c/rendu/PSU_2015_tetris/src
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Tue Mar  1 23:01:35 2016 Clement Thomas
** Last update Wed Mar  2 20:11:17 2016 Clement Thomas
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
  WINDOW *new_window;

  new_win = subwin(origin, 4, 9, 1, 47);
  mvprintw(0, 35, "------------");
  mvprintw(1, 35, "|          |");
  mvprintw(2, 35, "|          |");
  mvprintw(3, 35, "|          |");
  mvprintw(4, 35, "|          |");
  mvprintw(5, 35, "|          |");
  mvprintw(6, 35, "|          |");
  mvprintw(7, 35, "|          |");
  mvprintw(8, 35, "|          |");
  mvprintw(9, 35, "|          |");
  mvprintw(10, 35, "|          |");
  mvprintw(11, 35, "|          |");
  mvprintw(12, 35, "|          |");
  mvprintw(13, 35, "|          |");
  mvprintw(14, 35, "|          |");
  mvprintw(15, 35, "|          |");
  mvprintw(16, 35, "|          |");
  mvprintw(17, 35, "|          |");
  mvprintw(18, 35, "|          |");
  mvprintw(19, 35, "|          |");
  mvprintw(20, 35, "|          |");
  mvprintw(21, 35, "------------");
  next_tetri(origin);
}
