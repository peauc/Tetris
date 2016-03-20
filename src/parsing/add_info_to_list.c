/*
** add_info_to_list.c for add in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Tue Mar  1 14:52:20 2016 Clement Peau
** Last update Sun Mar 20 15:32:49 2016 Clement Peau
*/

#include "linked_list.h"

int	add_infos_to_list(t_tetriminos *list, char *relative_path)
{
  int		fd;
  char		*str;
  t_tetriminos	*link;

  if ((link = malloc(sizeof(t_tetriminos))) == NULL)
      return (1);
  link->color = 0;
  link->is_error = check_name(relative_path);
  link->name = get_file_name(relative_path);
  if ((fd = open(relative_path, O_RDONLY)) == -1)
    return (1);
  if ((str = get_next_line(fd)) == NULL)
      return (1);
  if (get_first_line(link, str) == 1)
    return (1);
  link->tetriminos = get_tetriminos(fd, link->size[1]);
  close (fd);
  check_size_error(link, relative_path);
  add_in_alphanumerical_order(list, link);
  return (0);
}
