/*
** main.c for main in /home/peau_c/rendu/Projets/PSU_2015_my_printf
**
** Made by clement peau
** Login   <peau_c@epitech.net>
**
** Started on  Wed Nov  4 00:24:30 2015 clement peau
** Last update Fri Mar  4 15:21:27 2016 Clement Peau
*/

#include <string.h>
#include <stdio.h>
#include "printf.h"

void	teurpoint(va_list ap, char c, int *b)
{
  void (*flags[13])(va_list, int *);
  char *s;
  int	i;

  i = 0;
  s = "csd%iupobxXSn";
  flags[0] = &my_putchar_varg;
  flags[1] = &my_putstr_varg;
  flags[2] = &my_put_nbrarg;
  flags[3] = &my_put_cent;
  flags[4] = &my_put_nbrarg;
  flags[5] = &my_put_nbr_unsi;
  flags[6] = &my_putnbr_point;
  flags[7] = &my_putnbr_oct;
  flags[8] = &my_putnbr_bin;
  flags[9] = &my_putnbr_hexamin;
  flags[10] = &my_putnbr_hexamaj;
  flags[11] = &my_putstr_oct;
  flags[12] = &my_put_n;
  while (s[i] != c && s[i] != 0)
    i++;
  if (i > 12)
    my_putspecial(c, b);
  else
    flags[i](ap, b);
}

int		my_printf(const char *format, ...)
{
  va_list	ap;
  int		i;
  int		b;

  i = 0;
  b = 0;
  va_start(ap, format);
  while (format[i] != 0)
    {
      if (format[i] == '%')
	{
	  if (format[++i] == ' ' && format[i] != 0)
	    {
	      while (format[++i] == ' ' && format[i] != 0);
	      if (format[i] == 'd' || format[i] == 'i' || format[i] == 'p')
		my_putchar(' ', &b);
	    }
	  teurpoint(ap, format[i], &b);
	}
      else
	my_putchar(format[i], &b);
      i++;
    }
  va_end(ap);
  return (b);
}
