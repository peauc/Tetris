/*
** two_worded_options_fonctions_next.c for foc in /home/peau_c/rendu/PSU/
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Tue Mar  8 03:49:39 2016 Clement Peau
** Last update Fri Mar 11 15:15:23 2016 Clement Peau
*/

#include "options.h"

int	quit_key_modifier(t_game *game, char  **av, int i)
{
  if (av[i + 1] == NULL)
    return (1);
  free(game->array[KEY_QUIT]);
  game->array[KEY_QUIT] = my_strdup(av[i + 1]);
  return (0);
}

int	pause_key_modifier(t_game *game, char **av, int i)
{
  if (av[i + 1] == NULL)
    return (1);
  free(game->array[KEY_PAUSE]);
  game->array[KEY_PAUSE] = my_strdup(av[i + 1]);
  return (0);
}

int	next_desactivator(t_game *game, char **av, int i)
{
  game->next = 1;
  i = i;
  av = av;
  return (0);
}

int	debug_activator(t_game *game, char **av, int i)
{
  game->debug = 1;
  av = av;
  i = i;
  return (0);
}
