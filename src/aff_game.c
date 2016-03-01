/*
** aff_game.c for aff_game in /home/thoma_c/rendu/PSU_2015_tetris/src
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Tue Mar  1 23:01:35 2016 Clement Thomas
** Last update Tue Mar  1 23:41:41 2016 Clement Thomas
*/

#include "tetris.h"

void	next_tetri()
{
  mvprintw(0, 48, "/Next--\\");
  mvprintw(1, 48, "|      |");
  mvprintw(2, 48, "|      |");
  mvprintw(3, 48, "\\------/");
}

void	aff_game()
{
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
  next_tetri();
}
