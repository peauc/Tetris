/*
** debug_mode.c for debuf in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Mar  4 12:47:23 2016 Clement Peau
** Last update Fri Mar  4 17:07:33 2016 Clement Peau
*/

#include "options.h"

void	debug_mode(t_tetriminos *list)
{
  aff_key();
  aff_tetri(list);
}
