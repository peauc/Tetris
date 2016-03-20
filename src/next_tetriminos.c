/*
** next_tetriminos.c for next_tetriminos in /home/thoma_c/rendu/PSU_2015_tetris/src
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Sun Mar  6 16:42:48 2016 Clement Thomas
** Last update Thu Mar 17 16:35:42 2016 Clement Thomas
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

void		aff_next_tetri(WINDOW *new_win, t_tetriminos *nex,
			       int nb, t_board *board)
{
  int		i;
  int		j;

  i = 0;
  init_pair(7, nex->color, COLOR_BLACK);
  wclear(board->next);
  next_tetri(board->next, nex);
  while (nex->tetriminos[i] != NULL)
    {
      j = 0;
      while (nex->tetriminos[i][j])
  	{
	  wrefresh(new_win);
  	  wattron(new_win, COLOR_PAIR(7));
  	  mvwprintw(new_win, i + 2, j + 4, "%c", nex->tetriminos[i][j]);
	  wattroff(new_win, COLOR_PAIR(7));
  	  j++;
  	}
      i++;
    }
  wrefresh(new_win);
  usleep(99999);
}
