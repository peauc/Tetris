/*
** main.c for main in /home/thoma_c/rendu/PSU_2015_tetris/src
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Wed Feb 24 15:30:25 2016 Clement Thomas
** Last update Sun Mar  6 20:01:07 2016 Clement Thomas
*/

#include "tetris.h"

int		main(int argc, char **argv)
{
  printf("REMETRE LE WERROR AVANT DE PUSH ET LE TETRIS\n");
  t_tetriminos	*list;
  char		**keys;
  WINDOW	*win;
  t_board	board;

  argc = argc;
  argv = argv;
  srand(time(NULL));
  /* new = newterm(NULL, stderr, stdin); */
  /* new = set_term(new); */
  list = parsing();
  /* keys = options(list, argv); */
  data_board_initialize(&board);
  aff_tetris(0, &board, list);
  return (0);
}
