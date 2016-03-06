/*
** aff_keys.c for aff_keys in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Mar  4 16:54:42 2016 Clement Peau
** Last update Sun Mar  6 16:18:07 2016 Clement Peau
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

void	aff_key(char **array)
{
  my_printf("*** DEBUG MODE ***\n");
  my_printf("Key Left : ");
  aff_letter(array[LEFT_KEY]);
  my_printf("Key Right : ");
  aff_letter(array[RIGHT_KEY]);
  my_printf("Key Turn : ");
  aff_letter(array[KEY_TURN]);
  my_printf("Key Drop : ");
  aff_letter(array[KEY_DROP]);
  my_printf("Key Quit : ");
  aff_letter(array[KEY_QUIT]);
  my_printf("Key Pause : ");
  aff_letter(array[KEY_PAUSE]);
  my_printf("Next : Yes/No\n");
  my_printf("Level : \n");
  my_printf("Size : \n");
}
