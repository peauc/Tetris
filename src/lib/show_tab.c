/*
** show_tab.c for getne in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Wed Mar  2 17:51:54 2016 Clement Peau
** Last update Wed Mar  2 18:12:00 2016 Clement Peau
*/

#include "tetris.h"

void	show_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != NULL)
    {
      PUTSTR(tab[i]);
      write(1, "\n", 1);
      i++;
    }
}
