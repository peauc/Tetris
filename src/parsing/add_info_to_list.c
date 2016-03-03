/*
** add_info_to_list.c for add in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Tue Mar  1 14:52:20 2016 Clement Peau
** Last update Thu Mar  3 12:33:16 2016 Clement Peau
*/

#include "linked_list.h"

int	add_infos_to_list(t_tetriminos *list, char *relative_path)
{
  int		fd;
  char		*str;
  t_tetriminos	*link;

  if ((link = malloc(sizeof(t_tetriminos))) == NULL)
      return (1);
  link->is_error = check_name(relative_path);
  if ((fd = open(relative_path, O_RDONLY)) == -1)
    return (1);
  if ((str = get_next_line(fd)) == NULL)
      return (1);
  get_first_line(link, str);
  link->tetriminos = get_tetriminos(fd, link->size[1]);
  close (fd);
  check_size_error(link, relative_path);
  add_to_back(list, link);
  return (0);
}
