/*
** get_tetriminos.c for get-tetriminos in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Wed Mar  2 17:43:01 2016 Clement Peau
** Last update Wed Mar  2 19:36:57 2016 Clement Peau
*/

#include "parsing.h"

char **get_tetriminos(int fd, int rows)
{
  char	**str;
  char	*line;
  int	i;

  i = 0;
  if ((str = malloc((rows + 1) * sizeof(char **))) == NULL)
    return (NULL);
  while ((line = get_next_line(fd)) != NULL)
    {
      str[i] = line;
      printf("row %s\n", str[i]);
      i++;
    }
  str[i] = NULL;
  show_tab(str);
  return (str);
}