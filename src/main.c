/*
** main.c for main in /home/thoma_c/rendu/PSU_2015_tetris/src
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Wed Feb 24 15:30:25 2016 Clement Thomas
** Last update Thu Mar 17 13:54:07 2016 Clement Peau
*/

#include "tetris.h"

int		main(int argc, char **argv)
{
  t_game        game;
  char          **keys;
  WINDOW        *win;
  t_board       board;

  if ((game.list = parsing()) == NULL ||
      options(&game, argv) == 1)
    return (1);
  /* data_board_initialize(&board, game.list, &game); */
  /* srand(time(NULL)); */
  /* if ((aff_tetris(0, &board, game.list, &game)) == -1) */
  /*   write(2, "The screen size must be highter\n", 32); */
  return (0);
}
