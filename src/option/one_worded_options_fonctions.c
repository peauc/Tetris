/*
** one_worded_options_fonctions.c for fucn in /home/peau_c/rendu/PSU/PSU_2015_
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Mon Mar  7 17:58:15 2016 Clement Peau
** Last update Mon Mar  7 19:58:35 2016 Clement Peau
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
      game->array[KEY_QUIT] = my_strdup(av[i] + j);
    }
  else if (av[i][j] == 0)
    return (1);
  my_printf("changement de key left = %s\n", game->array[KEY_QUIT]);
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
      game->array[KEY_PAUSE] = my_strdup(av[i] + j);
    }
  else if (av[i][j] == 0)
    return (1);
  my_printf("changement de key right = %s\n", game->array[KEY_PAUSE]);
  return (0);
}

int	map_size_modifier(t_game *game, char **av, int i)
{
  int	j;

  j = 0;
  while (av[i][j] != 0 && av[i][j] != '=')
    j++;
  if (av[i][j] == '=' && av[i][j + 1] == '{' && av[i][j + 2] != 0)
  j += 2;
  game->size[1] = getnbr(av[i] + j);
  while (av[i][j] != ',' && av[i][j] != 0)
    j++;
  j++;
  game->size[0] = getnbr(av[i] + j);
  my_printf("changed the size size[0] %d, size[1] %d\n",
	    game->size[0], game->size[1]);
  return (0);
}

int	next_modifier(t_game *game, char **av, int i)
{
  my_printf("next mode off\n");
  game->next = 1;
  i = i;
  av = av;
}

int	debug_modifier(t_game *game, char **av, int i)
{
  my_printf("debug mode on\n");
  game->debug = 1;
  av = av;
  i = i;
}
