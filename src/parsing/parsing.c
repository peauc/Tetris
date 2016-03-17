/*
** parsing.c for parsing in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Mon Feb 29 18:47:52 2016 Clement Peau
** Last update Thu Mar 17 14:44:59 2016 Clement Thomas
*/

#include "tetris.h"

t_tetriminos	*export_files()
{
  struct dirent	*dirent;
  DIR		*dirp;
  char		*str;
  t_tetriminos	*tetriminos;

  if ((tetriminos = create()) == NULL)
    return (NULL);
  if ((dirp = opendir("./tetriminos")) == NULL)
    error_int("Error can't find tetriminos folder", 1);
  while ((dirent = readdir(dirp)) != NULL)
      if (dirent->d_name[0] != '.')
	{
	  if ((str = my_strcat_name("tetriminos/", dirent->d_name)) == NULL)
	  	return (NULL);
	  add_infos_to_list(tetriminos, str);
	}
  closedir(dirp);
  return (tetriminos);
}

t_tetriminos	*parsing()
{
  t_tetriminos	*list;

  if ((list = export_files()) == NULL)
    return (NULL);
  if (list->next == NULL)
    return (NULL);
  return (list);
}
