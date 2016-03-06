/*
** get_name.c for get_name in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Thu Mar  3 12:46:03 2016 Clement Peau
** Last update Sun Mar  6 18:04:08 2016 Clement Peau
*/

#include "parsing.h"

void	get_file_name_next(char *name, char *fullname)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (fullname[j++] != '/');
  while (fullname[j] != '.')
    {
      name[i] = fullname[j];
      i++;
      j++;
    }
  name[i] = 0;
}

char	*get_file_name(char *full_name)
{
  char	*name;
  int	i;

  i = 0;
  while (full_name[i] != 0)
    {
      if (full_name[i] == '.')
	break ;
      if (full_name[i + 1] == 0)
	return (NULL);
      i++;
    }
  if ((name = malloc((i + 1) * sizeof(char))) == NULL)
    return (NULL);
  get_file_name_next(name, full_name);
  return (name);
}
