/*
** my_strlen.c for strlen in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Mon Feb 29 20:11:38 2016 Clement Peau
** Last update Mon Feb 29 20:12:12 2016 Clement Peau
*/

int	my_strlen(char *str)
{
  int	i;

  i = -1;
  while (str[++i]);
  return (i);
}
