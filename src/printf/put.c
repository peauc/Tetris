/*
** fonction.c for fonctions in /home/peau_c/rendu/Projets/tp/TP_Printf/PSU_2015_
**
** Made by clement peau
** Login   <peau_c@epitech.net>
**
** Started on  Wed Nov  4 12:27:11 2015 clement peau
** Last update Fri Mar  4 15:21:37 2016 Clement Peau
*/


#include "printf.h"

void	my_putchar_varg(va_list ap, int *i)
{
  char	c;

  c = va_arg(ap, int);
  write(1, &c, 1);
  *i = (*i) + 1;
}

void	my_putchar(char c, int *i)
{
  write(1, &c, 1);
  *i = (*i) + 1;
}

void	my_putstr_varg(va_list ap, int *i)
{
  int	s;
  char	*str;

  s = 0;
  str = va_arg(ap, char *);
  if (str == NULL)
    {
      my_putstr("(null)", i);
    return ;
    }
  while (str[s] != 0)
    {
      my_putchar(str[s], i);
      s++;
    }
}

void	my_put_nbrarg(va_list ap, int *i)
{
  int	nb;

  nb = va_arg(ap, int);
  my_putnbr_rec(nb, i);
}
