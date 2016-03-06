/*
** main.c for main in /home/thoma_c/rendu/PSU_2015_tetris/src
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Wed Feb 24 15:30:25 2016 Clement Thomas
** Last update Sun Mar  6 18:22:01 2016 Clement Peau
*/

#include "tetris.h"

int		main(int argc, char **argv)
{
  printf("REMETRE LE WERROR AVANT DE PUSH ET LE TETRIS\n");
  t_game	game;
  char		**keys;
  /* WINDOW	*win; */
  /* t_board	board; */

  /* win = initscr(); */
  /* argc = argc; */
  /* argv = argv; */
  game.list = parsing();
  options(&game, argv);
  /* data_board_initialize(&board); */
  /* aff_tetris(0, new, &board, win); */
  return (0);
}
