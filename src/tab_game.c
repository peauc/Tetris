/*
** tab_game.c for tab_game in /home/thoma_c/rendu/PSU_2015_tetris/src
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Mon Mar  7 18:30:01 2016 Clement Thomas
** Last update Fri Mar 11 17:59:16 2016 Clement Thomas
*/

#include "tetris.h"

int	mid_map(int x)
{
  int	nb;

  nb = x;
  if (x % 2 == 1)
    {
      nb--;
      nb /= 2;
    }
  else
    nb /= 2;
  return (nb);
}

int	mid_tetri(t_tetriminos *current, t_board *board)
{
  int	size;
  int	map_mid;

  size = my_strlen(current->tetriminos[0]);
  if (size != 0)
    {
      if (size % 2 == 1)
	{
	  size++;
	  size /= 2;
	}
      else
	size /= 2;
    }
  map_mid = mid_map(board->size_x);
  if (size > map_mid)
    return (-1);
  map_mid -= size;
  return (map_mid);
}


int	tab_game(int x, int y, t_board *board)
{
  int	i;
  int	j;
  char	**board_tab;

  i = 0;
  if ((board_tab = malloc(sizeof(char *) * (y + 1))) == NULL)
    return (-1);
  while (i != y)
    {
      j = 0;
      if ((board_tab[i] = malloc(sizeof(char) * (x + 1))) == NULL)
	return (-1);
      while (j != x)
	board_tab[i][j++] = '0';
      board_tab[i++][j] = '\0';
    }
  board_tab[i] = NULL;
  board->tab_board = board_tab;
  return (0);
}

int	set_tetri_to_tab(t_tetriminos *current, WINDOW *game,
			 t_board *board)
{
  int	start_x;
  int	start_y;
  int	i;
  int	j;

  i = 0;
  start_y = 0;
  start_x = mid_tetri(current, board);
  if (start_x == -1)
    return (-1);
  while (current->tetriminos[i] && board->tab_board[start_y])
    {
      j = 0;
      start_x = mid_tetri(current, board);
      while (current->tetriminos[i][j] && board->tab_board[start_y][start_x])
	{
	  if (current->tetriminos[i][j] == '*')
	    board->tab_board[start_y][start_x] = current->color + 48;
	  start_x++;
	  j++;
	}
      start_y++;
      i++;
    }
  return (0);
}

void	aff_tab_game(t_board *board)
{
  int	i;
  int	j;
  int	x;
  int	y;

  i = 0;
  y = 1;
  while (board->tab_board[i])
    {
      j = 0;
      x = 1;
      while (board->tab_board[i][j])
	{
	  if (board->tab_board[i][j] >= '1')
	    {
	      init_pair(10, board->tab_board[i][j] - 48, COLOR_BLACK);
	      wattron(board->game, COLOR_PAIR(10));
	      mvwprintw(board->game, y, x, "%c", '*');
	      wattroff(board->game, COLOR_PAIR(10));
	    }
	  x++;
	  j++;
	}
      i++;
      y++;
    }
  wrefresh(board->game);
}
