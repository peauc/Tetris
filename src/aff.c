/*
** main.c for main in /home/thoma_c/rendu/PSU_2015_tetris/src
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Wed Feb 24 15:30:25 2016 Clement Thomas
** Last update Tue Mar  1 20:19:58 2016 Clement Thomas
*/

#include "tetris.h"

void	aff_tet()
{
  init_pair(1, COLOR_RED, COLOR_BLACK);
  init_pair(2, COLOR_BLUE, COLOR_BLACK);
  init_pair(3, COLOR_YELLOW, COLOR_BLACK);
  init_pair(4, COLOR_GREEN, COLOR_BLACK);
  attron(COLOR_PAIR(1));
  mvprintw(0, 0, "***\n *\n *\n *\n *");
  attron(COLOR_PAIR(2));
  mvprintw(0, 4, "***");
  mvprintw(1, 4, "*");
  mvprintw(2, 4, "***");
  mvprintw(3, 4, "*");
  mvprintw(4, 4, "***");
  attron(COLOR_PAIR(3));
  mvprintw(0, 6, " ***");
  mvprintw(1, 6, "  *");
  mvprintw(2, 6, "  *");
  mvprintw(3, 6, "  *");
  mvprintw(4, 6, "  *");
  attron(COLOR_PAIR(4));
  mvprintw(0, 10, " ***");
  mvprintw(1, 10, " * *");
  mvprintw(2, 10, "  **");
  mvprintw(3, 10, " * *");
  mvprintw(4, 10, " * *");
}



void	aff_tetris(int ch, SCREEN *new)
{
  keypad(stdscr, TRUE);
  curs_set(FALSE);
  noecho();
  start_color();
  aff_tet();
  init_pair(5, 6, COLOR_BLACK);
  attron(COLOR_PAIR(5));
  mvprintw(0, 14, "  * ");
  mvprintw(1, 14, "    ");
  mvprintw(2, 14, "  * ");
  mvprintw(3, 14, "  * ");
  mvprintw(4, 14, "  * ");;
  init_pair(6, 9, COLOR_BLACK);
  attron(COLOR_PAIR(6));
  mvprintw(0, 18, "  * ");
  mvprintw(1, 18, "    ");
  mvprintw(2, 18, "  * ");
  mvprintw(3, 18, "  * ");
  mvprintw(4, 18, "  * ");
  refresh();
  while ((ch = getch()) != 27)
    {
    }
  endwin();
  delscreen(new);
}
