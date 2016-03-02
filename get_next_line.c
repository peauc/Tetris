/*
** get_next_line.c for get_next_line in /home/thoma_c/rendu/CPE_2015_getnextline
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Mon Jan  4 13:22:20 2016 Clement Thomas
** Last update Wed Mar  2 20:13:15 2016 Clement Peau
*/

#include "get_next_line.h"

char	*my_realloc(char *word, int size)
{
  char	*tmp;
  int	i;
  int	test;

  test = 0;
  while (word[test] != '\0')
    test++;
  i = 0;
  if ((tmp = malloc(sizeof(char) * (test + size) + 1)) == NULL)
    return (NULL);
  while (word[i] != '\0')
    tmp[i] = word[i++];
  tmp[i] = '\0';
  return (tmp);
}

void	my_strncpy(char *dest, char *src, int count)
{
  int	i;

  i = 0;
  while ((src[i] != '\0') && (i < count))
    dest[i] = src[i++];
  dest[i] = '\0';
}

char	*stock_line(char *line, char *buff, int *curs, int position)
{
  int	size_line;
  char	*next_line;

  size_line = 0;
  if (line != '\0')
    {
      while (line[size_line])
	size_line++;
    }
  if ((next_line = malloc((sizeof(char) * (size_line + position + 1)))) == NULL)
    return (NULL);
  if (line != 0)
    {
      next_line = my_realloc(line, size_line);
      free(line);
    }
  my_strncpy(next_line + size_line, buff + *curs, position);
  *curs += position + 1;
  return (next_line);
}

void		struct_init(t_var *tmp)
{
  tmp->line = 0;
  tmp->count = -1;
  tmp->rac = 0;
  tmp->count = 0;
}

char		*get_next_line(const int fd)
{
  t_var		tmp;
  static char	buff[READ_SIZE];
  static int	read_size = 0;
  static int	position = 0;

  struct_init(&tmp);
  while (++tmp.count != -2)
    {
      if (read_size <= position)
        {
          if (!(read_size = read(fd, buff, READ_SIZE)))
            return (tmp.line);
          if (read_size == -1)
            return (NULL);
	  position = 0;
          tmp.count = 0;
        }
      tmp.rac = position + tmp.count;
      if (buff[tmp.rac] == '\n')
        return ((tmp.line = stock_line(tmp.line, buff, &position, tmp.count)));
      if (position + tmp.count == read_size - 1)
        if ((tmp.line = stock_line(tmp.line, buff,
				   &position, tmp.count + 1)) == NULL)
          return (NULL);
    }
}
