/*
** my_strcmp.c for mystrcmp in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Thu Mar  3 13:37:21 2016 Clement Peau
** Last update Thu Mar  3 13:41:04 2016 Clement Peau
*/

int	my_strcmp(char *str1, char *str2)
{
  int	i;

  i = 0;
  while (str1[i] == str2[i] || str1[i] != 0 || str2[i] != 0)
    i++;
  return (str1[i] - str2[i]);
}
