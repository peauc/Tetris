/*
** main.c for main in /home/thoma_c/rendu/PSU_2015_tetris/src
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Wed Feb 24 15:30:25 2016 Clement Thomas
** Last update Wed Mar  2 20:14:41 2016 Clement Peau
*/

#include "tetris.h"

int		main(int argc, char **argv)
{
  printf("REMETRE LE WERROR AVANT DE PUSH ET LE TETRIS\n");
  WINDOW	*win; // toute la fenetre -> terminal initialise;
  SCREEN	*new;
  t_board	board;

		      //refresh(), cree la FPS (cedric qui a dit lol);
		      //clear() efface l'ecran;
  argc = argc;
  argv = argv;
  new = newterm(NULL, stderr, stdin);
  new = set_term(new);
  win = initscr();
  data_board_initialize(&board);
  aff_tetris(0, new, &board, win);
  parsing();
  return (0);
}
