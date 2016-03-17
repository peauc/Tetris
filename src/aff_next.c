/*
** aff_next.c for aff_next in /home/thoma_c/rendu/PSU_2015_tetris/src
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Fri Mar  4 14:56:48 2016 Clement Thomas
** Last update Thu Mar 17 16:45:26 2016 Clement Thomas
*/

#include "tetris.h"

void		initialize_limit(t_board *board, t_tetriminos *current)
{
  int		i;

  i = 0;
  while (current->tetriminos[i])
    i++;
  i--;
  board->limit = i;
}

void		data_tetri_tab(t_board *board, t_tetriminos *list, t_game *game)
{
  board->limit = 0;
  board->tetri_pos_y = 0;
  board->nb = nb_tetriminos(list);
  board->change_tetri = 1;
  board->mooving = which_tetriminos(game->list, nb_tetriminos(game->list));
  board->tetri_pos_x = mid_tetri(board->mooving, board);
}

void		my_screen(WINDOW *origin, t_board *board, t_tetriminos *list,
			  t_game *game)
{
  werase(board->game);
  werase(board->data_board);
  aff_logo_next();
  aff_game(board->game);
  aff_board(board, board->data_board);
  next_tetri(board->next, list);
  timer(board->data_board, board);
  if (board->change_tetri == 0)
    data_tetri_tab(board, list, game);
  initialize_limit(board, board->mooving);
  aff_down_tetri(board, board->mooving);
  aff_tab_game(board);
  del_down_tetri(board, board->mooving);
  usleep(20000);
  if (game->next == 0)
    aff_next_tetri(board->next, board->next_tetri, board->nb, board);
  board->tetri_pos_y++;
  if (board->tetri_pos_y + board->limit == board->size_y)
    {
      board->mooving = board->next_tetri;
      board->next_tetri = which_tetriminos(game->list, nb_tetriminos(game->list));
      board->tetri_pos_y = 0;
    }
  usleep(1000);
}

int	screen_size(WINDOW *origin)
{
  if (getmaxy(origin) < 25)
    return (1);
  else if (getmaxx(origin) < 58)
    return (1);
  return (0);
}
