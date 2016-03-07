/*
** fonction_pointer.c for fucntion pointer in /home/peau_c/rendu/PSU/PSU_
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Mon Mar  7 14:44:17 2016 Clement Peau
** Last update Mon Mar  7 15:19:10 2016 Clement Peau
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
  my_printf("level changed at %d\n", game->level);
  return (0);
}
