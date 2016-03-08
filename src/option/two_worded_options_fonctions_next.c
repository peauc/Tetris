/*
** two_worded_options_fonctions_next.c for foc in /home/peau_c/rendu/PSU/
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Tue Mar  8 03:49:39 2016 Clement Peau
** Last update Tue Mar  8 04:29:10 2016 Clement Peau
*/

#include "options.h"

int	quit_key_modifier(t_game *game, char  **av, int i)
{
  if ((av[i + 1] == NULL || av[i + 1][0] == '-'))
    return (1);
  free(game->array[KEY_QUIT]);
  game->array[KEY_QUIT] = my_strdup(av[i + 1]);
  my_printf("changement QUIT KEY %s\n", game->array[KEY_QUIT]);
  return (0);
}

int	pause_key_modifier(t_game *game, char **av, int i)
{
  if ((av[i + 1] == NULL || av[i + 1][0] == '-'))
    return (1);
  free(game->array[KEY_PAUSE]);
  game->array[KEY_PAUSE] = my_strdup(av[i + 1]);
  my_printf("changement KEY PAUSE %s\n", game->array[KEY_QUIT]);
  return (0);
}

int	next_desactivator(t_game *game, char **av, int i)
{
  game->next = 1;
  i = i;
  av = av;
  my_printf("next field desactivated\n");
  return (0);
}

int	debug_activator(t_game *game, char **av, int i)
{
  game->debug = 1;
  av = av;
  i = i;
  my_printf("Debug mode activated\n");
  return (0);
}
