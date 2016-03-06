/*
** options.c for options in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Mar  4 12:31:47 2016 Clement Peau
** Last update Sun Mar  6 14:36:31 2016 Clement Peau
*/

#include "tetris.h"

char	**options(t_tetriminos *list, char **av)
{
  char **keys;

  keys = initialize_keys(keys);
  debug_mode(list, keys);
  return (keys);
}
