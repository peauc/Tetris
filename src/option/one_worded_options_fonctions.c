/*
** one_worded_options_fonctions.c for fucn in /home/peau_c/rendu/PSU/PSU_2015_
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Mon Mar  7 17:58:15 2016 Clement Peau
** Last update Thu Mar 17 14:21:09 2016 Clement Peau
*/

#include "options.h"

int	key_quit_modifier(t_game *game, char **av, int i)
{
  int	j;

  j = 0;
  while (av[i][j] != 0 && av[i][j] != '=')
    j++;
  if (av[i][++j] != 0)
    {
      free(game->array[KEY_QUIT]);
      if ((game->array[KEY_QUIT] = my_strdup(av[i] + j)) == NULL)
	return (1);
    }
  else if (av[i][j] == 0)
    return (1);
  return (0);
}

int	key_pause_modifier(t_game *game, char **av, int i)
{
  int	j;

  j = 0;
  while (av[i][j] != 0 && av[i][j] != '=')
    j++;
  if (av[i][++j] != 0)
    {
      free(game->array[KEY_PAUSE]);
      if ((game->array[KEY_PAUSE] = my_strdup(av[i] + j)) == NULL)
	return (1);
    }
  else if (av[i][j] == 0)
    return (1);
  return (0);
}

int	map_size_modifier(t_game *game, char **av, int i)
{
  int	j;

  j = 0;
  while (av[i][j] != 0 && av[i][j] != '=')
    j++;
  if (av[i][j] == '=' && av[i][j + 1] != 0)
  j += 1;
  game->size[1] = getnbr(av[i] + j);
  while (av[i][j] != ',' && av[i][j] != 0)
    j++;
  j++;
  game->size[0] = getnbr(av[i] + j);
  return (0);
}

int	next_modifier(t_game *game, char **av, int i)
{
  if (my_strlen(av[i]) != my_strlen("--without-next"))
  game->next = 1;
  i = i;
  av = av;
  return (0);
}

int	debug_modifier(t_game *game, char **av, int i)
{
  int	j;
  char	*str;

  if (my_strlen(av[i]) != my_strlen("--debug"))
      return (1);
  game->debug = 1;
  av = av;
  i = i;
  return (0);
}

int	aff_help(t_game *game, char **av, int i)
{
  if (my_strlen(av[i]) != my_strlen("--help"))
    return (1);
  game->help = 1;
  return (0);
}
