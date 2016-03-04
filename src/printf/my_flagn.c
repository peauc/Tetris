/*
** fonction5.c for fonction5 in /home/peau_c/rendu/Projets/PSU_2015_my_printf
**
** Made by clement peau
** Login   <peau_c@epitech.net>
**
** Started on  Tue Nov 10 17:22:29 2015 clement peau
** Last update Fri Mar  4 15:20:52 2016 Clement Peau
*/

#include "printf.h"

void			my_put_n(va_list ap, int *i)
{
  unsigned long	      	*pointer;

  pointer = va_arg(ap, void *);
  *pointer = *i;
}
