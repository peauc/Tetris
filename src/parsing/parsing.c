/*
** parsing.c for parsing in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Mon Feb 29 18:47:52 2016 Clement Peau
** Last update Tue Mar  1 18:42:41 2016 Clement Peau
*/

#include "tetris.h"

int	export_files()
{
  struct dirent	*dirent;
  DIR		*dirp;
  char		*str;
  t_tetriminos	*tetriminos;

  if ((tetriminos = create()) == NULL)
    return (1);
  if ((dirp = opendir("./tetriminos")) == NULL)
    error_int("Error can't find tetriminos folder", 1);
  while ((dirent = readdir(dirp)) != NULL && dirent->d_name[0] != '.')
    {
      if ((str = my_strcat_name("./tetriminos/", dirent->d_name)) == NULL)
	return (1);
      add_infos_to_list(tetriminos, str);
    }
  return (0);
}

int	parsing()
{
  if (export_files() == 1)
    return (1);
  return (0);
}
