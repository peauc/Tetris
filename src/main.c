/*
** main.c for main in /home/thoma_c/rendu/PSU_2015_tetris/src
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Wed Feb 24 15:30:25 2016 Clement Thomas
** Last update Mon Feb 29 21:05:30 2016 Clement Peau
*/

#include "tetris.h"

void	aff_tet()
{
  init_pair(1, COLOR_RED, COLOR_BLACK);
  init_pair(2, COLOR_BLUE, COLOR_BLACK);
  init_pair(3, COLOR_YELLOW, COLOR_BLACK);
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
}



void	aff_tetris(int ch, SCREEN *new)
{
  keypad(stdscr, TRUE);
  curs_set(FALSE);
  noecho();
  start_color();
  init_pair(2, COLOR_GREEN, COLOR_BLACK);
  init_pair(5, 6, COLOR_BLACK);
  aff_tet();
  refresh();
  while ((ch = getch()) != 27)
    {
    }
  endwin();
  delscreen(new);
}

int		main(int argc, char **argv)
{
  printf("REMETRE LE WERROR AVANT DE PUSH\n");

  SCREEN	*new;

  argc = argc;
  argv = argv;
  new = newterm(NULL, stderr, stdin);
  new = set_term(new);
  aff_tetris(0, new);
  /* parsing(); */
  return (0);
}
