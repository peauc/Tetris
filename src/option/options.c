/*
** options.c for options in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Mar  4 12:31:47 2016 Clement Peau
** Last update Fri Mar 11 15:37:30 2016 Clement Peau
*/

#include "tetris.h"

int	load_default_info(t_game *game)
{
  if ((game->array = initialize_keys()) == NULL)
    return (1);
  game->debug = 0;
  game->help = 0;
  game->next = 0;
  game->level = 1;
  game->size[0] = 10;
  game->size[1] = 20;
  return (0);
}

int	options(t_game *game, char **av)
{
  load_default_info(game);
  if (one_word_options(game, av) == 1)
    {
      help_mode(game, av[0]);
      return (1);
    }
  if (two_word_options(game, av) == 1)
    {
      help_mode(game, av[0]);
      return (1);
    }
  if (game->help == 1)
    {
      help_mode(game, av[0]);
      return (1);
    }
  if (game->debug == 1)
      debug_mode(game);
  return (0);
}
