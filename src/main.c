/*
** main.c for main in /home/thoma_c/rendu/PSU_2015_tetris/src
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Wed Feb 24 15:30:25 2016 Clement Thomas
** Last update Fri Mar  4 12:25:31 2016 Clement Peau
*/

#include "tetris.h"

int		main(int argc, char **argv)
{
  printf("REMETRE LE WERROR AVANT DE PUSH ET LE TETRIS\n");
  t_tetriminos	*list;
  /* WINDOW	*win; */
  /* SCREEN	*new; */
  /* t_board	board; */


  list = parsing();
  options(list);
  /* argc = argc; */
  /* argv = argv; */
  /* new = newterm(NULL, stderr, stdin); */
  /* new = set_term(new); */
  /* win = initscr(); */
  /* data_board_initialize(&board); */
  /* aff_tetris(0, new, &board, win); */
  return (0);
}
