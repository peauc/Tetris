/*
** my_strcpy.c for strcpy in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Mar  4 19:26:41 2016 Clement Peau
** Last update Sun Mar  6 14:39:46 2016 Clement Peau
*/

void	my_strcpy(char *dest, char *src)
{
  int	i;

  i = -1;
  while (src[++i])
      dest[i] = src[i];
  dest[i] = 0;
}
