/*
** fonction3.c for focntion3 in /home/peau_c/rendu/Projets/PSU_2015_my_printf
**
** Made by clement peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Nov  6 22:58:06 2015 clement peau
** Last update Fri Mar  4 15:21:17 2016 Clement Peau
*/

#include "printf.h"

void			my_putnbr_hexamaj(va_list ap, int *i)
{
  unsigned long int	nb;
  char			*str;

  str = "0123456789ABCDEF";
  nb = va_arg(ap, unsigned long int);
  my_longint(nb, str, 16, i);
}

void			my_putnbr_hexamin(va_list ap, int *i)
{
  unsigned long int	nb;
  char			*str;

  str = "0123456789abcdef";
  nb = va_arg(ap, unsigned long int);
  my_longint(nb, str, 16, i);
}

void			my_putstr_oct(va_list ap, int *b)
{
  unsigned char		*str;
  int			i;

  i = 0;
  str = va_arg(ap, unsigned char *);
  while (str[i] != 0)
    {
      if (str[i] < 32 || str[i] >= 127)
	{
	  my_putchar(92, b);
	  my_putnbr2_oct(str[i], b);
	}
      else
	{
	  my_putchar(str[i], b);
	}
      i++;
    }
}

void			my_putspecial(char c, int *i)
{
  my_putchar('%', i);
  my_putchar(c, i);
}

void			my_putnbr2_oct(unsigned char c, int *i)
{
  char			*str;

  str = "01234567";
  if (c < 8)
    {
      my_putchar('0', i);
      my_putchar('0', i);
    }
  if (c < 32 && c >= 8)
    {
      my_putchar('0', i);
    }
  my_longint(c, str, 8, i);
}
