/*
** show_array.c for getne in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Wed Mar  2 17:51:54 2016 Clement Peau
** Last update Sun Mar  6 15:06:32 2016 Clement Peau
*/

#include "tetris.h"

void	show_tab(char **array)
{
  int	i;

  i = 0;
  while (array[i] != NULL)
    {
      PUTSTR(array[i]);
      write(1, "\n", 1);
      i++;
    }
}
