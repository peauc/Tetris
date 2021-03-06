/*
** fonction_pointer.c for fucntion pointer in /home/peau_c/rendu/PSU/PSU_
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Mon Mar  7 14:44:17 2016 Clement Peau
** Last update Tue Mar  8 18:03:45 2016 Clement Peau
*/

#include "options.h"

int	level_modifier(t_game *game, char **av, int i)
{
  int	j;

  j = 0;
  while (av[i][j] != 0 && av[i][j] != '=')
    j++;
  if (av[i][j++] != 0)
      game->level = getnbr(av[i] + j);
  return (0);
}

int	left_key_modifier(t_game *game, char **av, int i)
{
  int	j;

  j = 0;
  while (av[i][j] != 0 && av[i][j] != '=')
    j++;
  if (av[i][++j] != 0)
    {
      free(game->array[LEFT_KEY]);
      if ((game->array[LEFT_KEY] = my_strdup(av[i] + j)) == NULL)
	return (1);
    }
  else if (av[i][j] == 0)
    return (1);
  return (0);
}

int	right_key_modifier(t_game *game, char **av, int i)
{
  int	j;

  j = 0;
  while (av[i][j] != 0 && av[i][j] != '=')
    j++;
  if (av[i][++j] != 0)
    {
      free(game->array[RIGHT_KEY]);
      if ((game->array[RIGHT_KEY] = my_strdup(av[i] + j)) == NULL)
	return (1);
    }
  else if (av[i][j] == 0)
    return (1);
  return (0);
}

int	key_drop_modifier(t_game *game, char **av, int i)
{
  int	j;

  j = 0;
  while (av[i][j] != 0 && av[i][j] != '=')
    j++;
  if (av[i][++j] != 0)
    {
      free(game->array[KEY_TURN]);
      if ((game->array[KEY_TURN] = my_strdup(av[i] + j)) == NULL)
	return (1);
    }
  else if (av[i][j] == 0)
    return (1);
  return (0);

}

int	key_turn_modifier(t_game *game, char **av, int i)
{
  int	j;

  j = 0;
  while (av[i][j] != 0 && av[i][j] != '=')
    j++;
  if (av[i][++j] != 0)
    {
      free(game->array[KEY_TURN]);
      if ((game->array[KEY_TURN] = my_strdup(av[i] + j)) == NULL)
	return (1);
    }
  else if (av[i][j] == 0)
    return (1);
  return (0);

}
