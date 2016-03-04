/*
** fonction2.c for lol in /home/peau_c/rendu/Projets/PSU_2015_my_printf
**
** Made by clement peau
** Login   <peau_c@epitech.net>
**
** Started on  Thu Nov  5 22:54:01 2015 clement peau
** Last update Fri Mar  4 15:44:22 2016 Clement Peau
*/

#include "printf.h"

void	my_putstr(char *s, int *i)
{
  int	b;

  b = 0;
  while (s[b] != 0)
    {
      my_putchar(s[b], i);
      b++;
    }
}

void	my_put_cent(va_list ap, int *i)
{
  my_putchar('%', i);
  ap = ap;
}

void	my_putnbr_rec(int nb, int *i)
{
  if (nb < 0)
    {
      my_putchar('-', i);
      (nb = -nb);
    }
  if (nb / 10 > 0)
    my_putnbr_rec(nb / 10, i);
  my_putchar(nb % 10 + 48, i);
}

void	my_put_nbr_unsign(unsigned int nb, int *i)
{
  if (nb / 10 > 0)
    my_putnbr_rec(nb / 10, i);
  my_putchar(nb % 10 + 48, i);
}

void	my_put_nbr_unsi(va_list ap, int *i)
{
  unsigned int	nb;

  nb = va_arg(ap, unsigned int);
  my_put_nbr_unsign(nb, i);
}
