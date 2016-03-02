/*
** get_next_line.h for get_next_line in /home/thoma_c/rendu/CPE_2015_getnextline
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Mon Jan  4 10:24:02 2016 Clement Thomas
** Last update Fri Feb 26 19:08:55 2016 Clement Thomas
*/

#ifndef READ_SIZE
# define READ_SIZE (100)

#endif /* READ_SIZE */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>
#include <stdlib.h>

typedef struct		s_var
{
  int			count;
  char			*line;
  int			rac;
}			t_var;

#endif /* GET_NEXT_LINE_H */
