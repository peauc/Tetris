
/*
** main.c for main in /home/thoma_c/rendu/PSU_2015_tetris/src
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Wed Feb 24 15:30:25 2016 Clement Thomas
** Last update Sat Mar 12 16:27:06 2016 Clement Peau
*/

#include "tetris.h"

int             main(int argc, char **argv)
{
  printf("REMETRE LE WERROR AVANT DE PUSH ET LE TETRIS\n");
  t_game        game;
  char          **keys;
  WINDOW        *win;
  t_board       board;

  /* argc = argc; */
  /* argv = argv; */
  game.list = parsing();
  options(&game, argv);
  options(&game, argv);
  data_board_initialize(&board, game.list, &game);
  srand(time(NULL));
  if ((aff_tetris(0, &board, game.list, &game)) == -1)
    write(2, "The screen size must be highter\n", 32);
  return (0);
}
