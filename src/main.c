/*
** main.c for main in /home/thoma_c/rendu/PSU_2015_tetris/src
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Wed Feb 24 15:30:25 2016 Clement Thomas
** Last update Tue Mar  1 20:24:23 2016 Clement Thomas
*/

#include "tetris.h"

int		main(int argc, char **argv)
{
  printf("REMETRE LE WERROR AVANT DE PUSH\n");
  WINDOW	*win; // toute la fenetre -> terminal initialise;
  SCREEN	*new;

		      //refresh(), cree la FPS (cedric qui a dit lol);
		      //clear() efface l'ecran;
  argc = argc;
  argv = argv;
  new = newterm(NULL, stderr, stdin);
  new = set_term(new);
  aff_tetris(0, new);
  /* parsing(); */
  return (0);
}
