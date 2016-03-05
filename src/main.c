/*
** main.c for main in /home/thoma_c/rendu/PSU_2015_tetris/src
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Wed Feb 24 15:30:25 2016 Clement Thomas
** Last update Sat Mar  5 15:19:58 2016 Clement Thomas
*/

#include "tetris.h"

int		main(int argc, char **argv)
{
  printf("REMETRE LE WERROR AVANT DE PUSH ET LE TETRIS\n");
  t_tetriminos	*list;
  char		**keys;
  WINDOW	*win;
  t_board	board;


  /* list = parsing(); */
  /* keys = options(list, argv); */
  /* argc = argc; */
  /* argv = argv; */
  data_board_initialize(&board);
  aff_tetris(0, &board);
  return (0);
}
