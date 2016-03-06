/*
** debug_mode.c for debuf in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Mar  4 12:47:23 2016 Clement Peau
** Last update Sun Mar  6 18:40:27 2016 Clement Peau
*/

#include "options.h"

void	debug_mode(t_game *game)
{
  aff_key(game);
  aff_tetri(game->list);
}
