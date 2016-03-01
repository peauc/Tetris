/*
** get_next_line.c for getnextline in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Tue Mar  1 15:48:51 2016 Clement Peau
** Last update Tue Mar  1 18:37:12 2016 Clement Peau
*/

#include "tetris.h"

char		*my_realloc(char *str, int nb_to_realloc)
{
  int		i;
  char		*new_str;

  i = my_strlen(str);
  if ((new_str = malloc(i * sizeof(char))) == NULL)
    return (NULL);
  i = -1;
  while (str[++i])
    new_str[i] = str[i];
  new_str[i] = 0;
  return (new_str);
}

char		*get_next_line(const int fd)
{
  char		*str;
  char		*buff;
  int		i;

  i = 0;
  if ((str = malloc((2) * sizeof(char))) == NULL ||
       (buff = malloc((2) * sizeof(char))) == NULL)
    return (NULL);
  while (read(fd, str, 1) != 0)
    {
     buff[i] = str[0];
      if (buff[i] == '\n')
	{
	  buff[i] = 0;
	  return (buff);
	}
      buff = my_realloc(buff, 1);
      i++;
    }
  return (NULL);
}
