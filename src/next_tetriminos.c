/*
** next_tetriminos.c for next_tetriminos in /home/thoma_c/rendu/PSU_2015_tetris/src
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Sun Mar  6 16:42:48 2016 Clement Thomas
** Last update Sat Mar 12 16:31:44 2016 Clement Peau
*/

#include "tetris.h"

int	nb_tetriminos(t_tetriminos *list)
{
  int	nb;
  int	my_rand;

  nb = get_lenght_of_list(list);
  my_rand = (rand() % nb) + 1;
  return (my_rand);
}

t_tetriminos	*which_tetriminos(t_tetriminos *list, int nb_tetri)
{
  int		count;
  t_tetriminos	*tmp;

  count = 0;
  tmp = list;
  while (tmp->next != NULL)
    {
      tmp = tmp->next;
      if (count == nb_tetri)
  	break ;
      count++;
    }
  return (tmp);
}

void		aff_next_tetri(WINDOW *new_win, t_tetriminos *nex, int nb)
{
  int		i;
  int		j;
  t_tetriminos	*tmp;

  i = 0;
  tmp = which_tetriminos(nex, nb);
  init_pair(7, tmp->color, COLOR_BLACK);
  while (tmp->tetriminos[i] != NULL)
    {
      j = 0;
      while (tmp->tetriminos[i][j])
  	{
	  wrefresh(new_win);
  	  wattron(new_win, COLOR_PAIR(7));
  	  mvwprintw(new_win, i + 2, j + 4, "%c", tmp->tetriminos[i][j]);
	  wattroff(new_win, COLOR_PAIR(7));
  	  j++;
  	}
      i++;
    }
}
