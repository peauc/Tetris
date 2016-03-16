/*
** param_checker.c for param in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Wed Mar 16 15:06:50 2016 Clement Peau
** Last update Wed Mar 16 16:18:36 2016 Clement Peau
*/

#include "options.h"

int	param_checker(t_game *game, char **av)
{
  int	i;
  int	j;
  int	k;
  char	**one;
  char	**two;

  if (((two = load_dico_two()) == NULL) ||
      ((one = load_dico_one()) == NULL) ||
      !(i = 1) || (j = 0) || (k = 0))
    return (1);
  while (av[i - 1] != NULL && av[i])
    {
      if (j == 8 && k == 10)
	return (1);
      if (my_strcmp_modified_two(two[j], av[i]) == 0)
	{
	  if ((j = 0) || (k = 0) || (i += 2));
	}
      else if (my_strcmp_modified_one(one[k], av[i]) == 0)
	if ((j = 0) || (k = 0) || (i++));
      if ((k++) && j < 8 && (j++));
    }
  return (0);
}
