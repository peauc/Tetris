/*
** parsing.c for parsing in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Mon Feb 29 18:47:52 2016 Clement Peau
** Last update Tue Mar  1 14:37:46 2016 Clement Peau
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
    {
      PUTERROR("Couldn't open ./tetriminos\n");
      return (1);
    }
  while ((dirent = readdir(dirp)) != NULL && dirent->d_name[0] != '.')
    {
      if ((str = my_strcat_name("./tetriminos/", dirent->d_name)) == NULL)
	return (1);
    }
  return (0);
}

int	parsing()
{
  if (export_files() == 1)
    return (1);
  return (0);
}
