/*
** two_worded_options_fonctions.c for fonctiosn in /home/peau_c/rendu/PSU/PSU_
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Tue Mar  8 02:37:33 2016 Clement Peau
** Last update Tue Mar  8 18:04:51 2016 Clement Peau
*/

#include "options.h"

int	change_level(t_game *game, char **av, int i)
{
  if (av[i + 1] == NULL || av[i + 1][0] == '-')
    return (1);
  game->level = getnbr(av[i + 1]);
  return (0);
}

int	key_right_modifier(t_game *game, char **av, int i)
{
  if (av[i + 1] == NULL || av[i + 1][0] == '-')
    return (1);
  free(game->array[RIGHT_KEY]);
  game->array[RIGHT_KEY] = my_strdup(av[i + 1]);
  return (0);
}

int	key_left_modifier(t_game *game, char **av, int i)
{
  if (av[i + 1] == NULL || av[i + 1][0] == '-')
    return (1);
  free(game->array[LEFT_KEY]);
  game->array[LEFT_KEY] = my_strdup(av[i + 1]);
  return (0);
}

int	turn_key_modifier(t_game *game, char **av, int i)
{
  if (av[i + 1] == NULL || av[i + 1][0] == '-')
    return (1);
  free(game->array[KEY_TURN]);
  game->array[KEY_TURN] = my_strdup(av[i + 1]);
  return (0);
}

int	drop_key_modifier(t_game *game, char **av, int i)
{
  if (av[i + 1] == NULL || av[i + 1][0] == '-')
    return (1);
  free(game->array[KEY_DROP]);
  game->array[KEY_DROP] = my_strdup(av[i + 1]);
  return (0);
}
