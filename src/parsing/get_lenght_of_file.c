/*
** get_lenght_of_file.c for get_lenght_of_file in /home/peau_c/rendu/PSU/PSU_
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Thu Mar  3 10:10:59 2016 Clement Peau
** Last update Thu Mar  3 10:23:21 2016 Clement Peau
*/

#include "parsing.h"

int	get_length_of_file(char *filename)
{
  int	i;
  int	fd;
  char	*str;

  if ((str = malloc(2 * sizeof(char))) == NULL)
    return (1);
  fd = open(filename, O_RDONLY);
  i = 0;
  while (read(fd, str, 1) > 0)
    {
      if (str[0] == 10)
	i++;
    }
  close(fd);
  return (i);
}
