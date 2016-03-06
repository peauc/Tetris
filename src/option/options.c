/*
** options.c for options in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Mar  4 12:31:47 2016 Clement Peau
** Last update Sun Mar  6 19:02:58 2016 Clement Peau
*/

#include "tetris.h"

int	load_default_info(t_game *game)
{
  if ((game->array = initialize_keys()) == NULL)
    return (1);
  game->next = 0;
  game->level = 1;
  game->size[0] = 10;
  game->size[1] = 20;
  return (0);
}

int	options(t_game *game, char **av)
{
  load_default_info(game);
  one_word_options(game, av);
  return (0);
}
