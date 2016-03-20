/*
** moove_down_tetri.c for moove_down_tetri in /home/thoma_c/rendu/PSU_2015_tetris/src
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Sat Mar 12 17:49:23 2016 Clement Thomas
** Last update Thu Mar 17 15:06:07 2016 Clement Thomas
*/

#include "tetris.h"

int	moove_down_tetri_next(t_board *board, t_tetriminos *mooving,
			      int i, int tmp_y)
{
  int	tmp_x;
  int	j;

  tmp_x = 0;
  j = 0;
  while (mooving->tetriminos[tmp_y][tmp_x] && board->tab_board[i][j])
    {
      if (mooving->tetriminos[tmp_y][tmp_x] == '*')
	{
	  if (board->tab_board[i][j] == '0')
	    {
	      tmp_x++;
	      j++;
	    }
	  else
	    return (-2);
	}
      else
	{
	  tmp_x++;
	  j++;
	}
    }
  return (0);
}

int	moove_down_tetri(t_board *board, t_tetriminos *mooving)
{
  int	i;
  int	tmp_y;

  if (board->tetri_pos_x == -1)
    return (-1);
  tmp_y = 0;
  i = board->tetri_pos_y;
  if (board->tab_board[board->tetri_pos_y][board->tetri_pos_x] == '0')
    while (mooving->tetriminos[tmp_y] && board->tab_board[i])
      {
	if ((moove_down_tetri_next(board, mooving, i, tmp_y)) == -2)
	  return (-2);
	i++;
	tmp_y++;
      }
  return (0);
}

void	del_down_tetri(t_board *board, t_tetriminos *mooving)
{
  int   i;
  int   j;
  int   tmp_x;
  int   tmp_y;

  i = 0;
  tmp_y = board->tetri_pos_y;
  tmp_x = board->tetri_pos_x;
  while (mooving->tetriminos[i] != NULL)
    {
      j = 0;
      tmp_x = board->tetri_pos_x;
      while (mooving->tetriminos[i][j] && board->tab_board[tmp_y][tmp_x])
        {
          if (board->tab_board[tmp_y][tmp_x] > '0' &&
	      mooving->tetriminos[i][j] == '*')
	    {
	      board->tab_board[tmp_y][tmp_x] = '0';
	  }
          tmp_x++;
          j++;
	}
      tmp_y++;
      i++;
    }
}

void	aff_down_tetri(t_board *board, t_tetriminos *mooving)
{
  int	i;
  int	j;
  int	tmp_x;
  int	tmp_y;

  i = 0;
  tmp_y = board->tetri_pos_y;
  tmp_x = board->tetri_pos_x;
  while (mooving->tetriminos[i] != NULL)
    {
      j = 0;
      tmp_x = board->tetri_pos_x;
      while (mooving->tetriminos[i][j] && board->tab_board[tmp_y][tmp_x])
	{
	  if (mooving->tetriminos[i][j] == '*')
	    board->tab_board[tmp_y][tmp_x] = mooving->color + 48;
	  tmp_x++;
	  j++;
	}
      tmp_y++;
      i++;
    }
}
