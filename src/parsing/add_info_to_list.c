/*
** add_info_to_list.c for add in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Tue Mar  1 14:52:20 2016 Clement Peau
** Last update Wed Mar  2 20:11:18 2016 Clement Peau
*/

#include "linked_list.h"

int	add_infos_to_list(t_tetriminos *list, char *relative_path)
{
  int	fd;
  char	*str;

  if ((fd = open(relative_path, O_RDONLY)) == -1)
    return (1);
  if ((str = get_next_line(fd)) == NULL)
    {
      printf("get_next_Line pete\n");
      return (1);
    }
  get_first_line(list, str);
  get_tetriminos(fd, list->size[1]);
  close (fd);
  return (0);
}