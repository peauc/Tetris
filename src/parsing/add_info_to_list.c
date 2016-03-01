/*
** add_info_to_list.c for add in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Tue Mar  1 14:52:20 2016 Clement Peau
** Last update Tue Mar  1 18:51:58 2016 Clement Peau
*/

#include "linked_list.h"

void	add_infos_to_list(t_tetriminos *list, char *relative_path)
{
  int	fd;

  fd = open(relative_path, O_RDONLY);

}
