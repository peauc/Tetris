/*
** main.c for main in /home/thoma_c/rendu/PSU_2015_tetris/src
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Wed Feb 24 15:30:25 2016 Clement Thomas
** Last update Sun Mar  6 19:24:24 2016 Clement Thomas
*/

#include "tetris.h"

void	data_board_initialize(t_board *board)
{
  board->size_x = 10;
  board->size_y = 20;
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

void	aff_board(t_board *board, WINDOW *new_win)
{
  wborder(new_win, '|', '|', '-', '-', '/', '\\', '\\', '/');
  mvwprintw(new_win, 2, 1, " Hight score");
  mvwprintw(new_win, 2, 17, "%d", board->hight_score);
  mvwprintw(new_win, 3, 1, " Score");
  mvwprintw(new_win, 3, 17, "%d", board->score);
  mvwprintw(new_win, 5, 1, " Lines");
  mvwprintw(new_win, 5, 17, "%d", board->line);
  mvwprintw(new_win, 6, 1, " Level");
  mvwprintw(new_win, 6, 17, "%d", board->level);
  mvwprintw(new_win, 8, 1, " Timer:");
  wrefresh(new_win);
}

void		aff_tetris(int ch, t_board *board, t_tetriminos *list)
{
  WINDOW	*win;

  int i = 0;
  board->timer_second = time(NULL);
  board->timer_minutes = 0;
  win = initscr();
  board->data_board = subwin(win, 11, 23, 6, 1);
  board->next = subwin(win, 4, 9, 1, 48);
  board->game = subwin(win, board->size_y + 2, board->size_x + 2, 0, 35);
  keypad(stdscr, TRUE);
  curs_set(FALSE);
  noecho();
  start_color();
  while (2)
    {
      if ((screen_size(win)) == 1)
	{
	  clear();
	  printw("Error size");
	  usleep(1000);
	}
      else
	my_screen(win, board, list);
      wrefresh(win);
    }
  endwin();
}
