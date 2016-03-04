/*
** .h for h in /home/peau_c/rendu/Projets/PSU_2015_my_printf
**
** Made by clement peau
** Login   <peau_c@epitech.net>
**
** Started on  Thu Nov  5 17:22:17 2015 clement peau
** Last update Fri Mar  4 15:27:47 2016 Clement Peau
*/
#ifndef _H_
# define _H_

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int	my_printf(const char *format, ...);
int	my_strlen(char *);
void	my_putnbr_rec(int , int *);
void	my_putstr(char *, int *);
void	my_put_nbrarg(va_list ap, int *);
void	my_put_n(va_list, int *);
void	my_putstr_oct(va_list, int *);
void	my_putnbr2_oct(unsigned char, int *);
void	my_putcent(va_list, int *);
void	my_put_nbrarg(va_list, int *);
void	my_put_nbr_unsi(va_list, int *);
void	my_putchar_varg(va_list, int *);
void	my_putchar(char, int *);
void	my_putstr_varg(va_list, int *);
void	my_putnbr_point(va_list, int *);
void	my_putnbr_oct(va_list, int *);
void	my_putnbr_bin(va_list, int *);
void	my_putnbr_hexamin(va_list, int *);
void	my_putnbr_hexamaj(va_list, int *);
void	my_longint(unsigned long int, char *, int, int *);
void	my_putnbr_bin(va_list, int *);
void	my_put_cent(va_list, int *);
void	my_putstr_oct(va_list, int *);
void	my_putspecial(char, int *) ;

#endif
