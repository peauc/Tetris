/*
** options.c for options in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Mar  4 12:31:47 2016 Clement Peau
** Last update Sat Mar 12 14:46:43 2016 Clement Peau
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

void	cannon_mode(int mode)
{
  struct termios	old;
  struct termios	new;
  int	readed;
  char	c;

  printf("coucou\n");
  readed = 0;
  c = 0;
  if (ioctl(0, TCGETS, &old) < 0 ||
      ioctl(0, TCGETS, &new) < 0)
    return ;
  new.c_lflag &= ~ECHO;
  new.c_lflag &= ~ICANON;
  new.c_cc[VMIN] = 1;
  if (ioctl(0, TCSETS, &new) < 0)
    return ;
  while ((readed = read(0, &c, 1)) < 1);
  printf("readed\n");
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
    {
      debug_mode(game);
      cannon_mode(1);
    }
  return (0);
}
