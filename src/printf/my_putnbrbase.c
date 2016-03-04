/*
** fonction3.c for focntion3 in /home/peau_c/rendu/Projets/PSU_2015_my_printf
**
** Made by clement peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Nov  6 22:58:06 2015 clement peau
** Last update Fri Mar  4 15:21:02 2016 Clement Peau
*/
#include "printf.h"

void	my_longint(unsigned long int nb, char *base, int sizebase, int *i)
{
  if (nb / sizebase > 0)
    my_longint(nb/sizebase, base, sizebase, i);
  my_putchar(base[nb % sizebase], i);
}

void	my_putnbrbase(int nb, char *base, int sizebase, int *i)
{
  if (nb / sizebase > 0)
    my_putnbrbase(nb/sizebase, base, sizebase, i);
  my_putchar(base[nb % sizebase], i);
}

void	my_putnbr_point(va_list ap, int *i)
{
  char	*str;
  unsigned long int nb;

  nb = va_arg(ap, unsigned long int);
  if (nb == 0)
    {
      my_putstr("(nil)", i);
      return ;
    }
  str = "0123456789abcdef";
  my_putstr("0x", i);
  my_longint(nb, str, 16, i);
}

void	my_putnbr_bin(va_list ap, int *i)
{
  int	nb;
  char	*str;

  str = "01";
  nb = va_arg(ap, int);
  if (nb < 0)
    {
      my_putchar ('-', i);
      nb = -nb;
    }
  my_putnbrbase(nb, str, 2, i);
}

void	my_putnbr_oct(va_list ap, int *i)
{
  unsigned int	nb;
  char	*str;

  str = "01234567";
  nb = va_arg(ap, unsigned int);
  my_longint(nb, str, 8, i);
}
