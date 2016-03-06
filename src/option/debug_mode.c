/*
** debug_mode.c for debuf in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Mar  4 12:47:23 2016 Clement Peau
** Last update Sun Mar  6 14:37:59 2016 Clement Peau
*/

#include "options.h"

void	debug_mode(t_tetriminos *list, char **keys)
{
  aff_key(keys);
  aff_tetri(list);
}
