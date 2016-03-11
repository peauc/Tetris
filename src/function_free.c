/*
** function_free.c for function free in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Mar 11 15:00:28 2016 Clement Peau
** Last update Fri Mar 11 16:59:49 2016 Clement Peau
*/

#include "tetris.h"

void		free_fct_pointer(t_pointer *fct)
{
  free_tab(fct->dico);
  free(fct->pointer);
}

void		free_tab(char **array)
{
  int		i;

  i = 0;
  while (array[i] != NULL)
    {
      free(array[i]);
      i++;
    }
  free(array);
}

void		function_free(t_game *game)
{
  t_tetriminos	*tmp;

  free(game->array);
  while (game->list != NULL)
    {
      /* free(game->list->name); */
      /* free_tab(game->list->tetriminos); */
      tmp = game->list;
      game->list = game->list->next;
      free(tmp);
    }
  free(game->list);
}
