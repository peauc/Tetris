/*
** main.c for main in /home/thoma_c/rendu/PSU_2015_tetris/src
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Wed Feb 24 15:30:25 2016 Clement Thomas
** Last update Tue Mar  1 23:24:05 2016 Clement Thomas
*/

#include "tetris.h"

void	data_board_initialize(t_board *board)
{
  board->hight_score = 0;
  board->score = 0;
  board->line = 0;
  board->level = 1;
  board->timer = 0;
}

void	aff_logo()
{
  init_pair(1, COLOR_RED, COLOR_BLACK);
  init_pair(2, COLOR_BLUE, COLOR_BLACK);
  init_pair(3, COLOR_YELLOW, COLOR_BLACK);
  init_pair(4, COLOR_GREEN, COLOR_BLACK);
  init_pair(5, 6, COLOR_BLACK);
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

void	aff_logo_next()
{
  aff_logo();
  attron(COLOR_PAIR(5));
  mvprintw(0, 14, "  * ");
  mvprintw(1, 14, "    ");
  mvprintw(2, 14, "  * ");
  mvprintw(3, 14, "  * ");
  mvprintw(4, 14, "  * ");
  init_pair(6, COLOR_WHITE, COLOR_BLACK);
  attron(COLOR_PAIR(6));
  mvprintw(0, 18, " ***");
  mvprintw(1, 18, " *  ");
  mvprintw(2, 18, " ***");
  mvprintw(3, 18, "   *");
  mvprintw(4, 18, " ***");
}

void	aff_board(t_board *board)
{
  mvprintw(6, 0, "/-----------------------\\");
  mvprintw(7, 0, "|                       |");
  mvprintw(8, 0, "| Hight score           |");
  mvprintw(8, 18, "%d", board->hight_score);
  mvprintw(9, 0, "| Score                 |");
  mvprintw(9, 18, "%d", board->score);
  mvprintw(10, 0, "|                       |");
  mvprintw(11, 0, "| Lines                 |");
  mvprintw(11, 18, "%d", board->line);
  mvprintw(12, 0, "| Level                 |");
  mvprintw(12, 18, "%d", board->level);
  mvprintw(13, 0, "|                       |");
  mvprintw(14, 0, "| Timer:                |");
  mvprintw(14, 18, "%d", board->timer);
  mvprintw(15, 0, "|                       |");
  mvprintw(16, 0, "/-----------------------\\");
}
  void	aff_tetris(int ch, SCREEN *new, t_board *board)
{
  keypad(stdscr, TRUE);
  curs_set(FALSE);
  noecho();
  start_color();
  aff_logo_next();
  aff_board(board);
  aff_game();
  refresh();
  while ((ch = getch()) != 27)
    {
    }
  endwin();
  delscreen(new);
}
