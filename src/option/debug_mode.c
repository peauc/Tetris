/*
** debug_mode.c for debuf in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Mar  4 12:47:23 2016 Clement Peau
** Last update Mon Mar 14 18:29:30 2016 Clement Peau
*/

#include "options.h"

void	debug_mode(t_game *game)
{
  aff_key(game);
  aff_tetri(game->list);
  write(1, "Press a key to start Tetris\n", 28);
}
