/*
** aff_keys.c for aff_keys in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Mar  4 16:54:42 2016 Clement Peau
** Last update Sun Mar  6 18:39:54 2016 Clement Peau
*/

#include "options.h"

void	aff_letter(char *str)
{
  int	i;

  i = -1;
  while (str[++i])
    {
      if (str[i] == 27)
	write(1, "^E", 2);
      else if (str[i] == 32 && str[i + 1] == 0)
	write(1, "(space)", 7);
      else
	write(1, &str[i], 1);
    }
  write(1, "\n", 1);
}

void	aff_key(t_game *game)
{
  my_printf("*** DEBUG MODE ***\n");
  my_printf("Key Left : ");
  aff_letter(game->array[LEFT_KEY]);
  my_printf("Key Right : ");
  aff_letter(game->array[RIGHT_KEY]);
  my_printf("Key Turn : ");
  aff_letter(game->array[KEY_TURN]);
  my_printf("Key Drop : ");
  aff_letter(game->array[KEY_DROP]);
  my_printf("Key Quit : ");
  aff_letter(game->array[KEY_QUIT]);
  my_printf("Key Pause : ");
  aff_letter(game->array[KEY_PAUSE]);
  (game->next == 1 ? my_printf("Next : No\n") : my_printf("Next : Yes\n"));
  my_printf("Level : %d\n", game->level);
  my_printf("Size : %d*%d\n", game->size[1], game->size[0]);
}
