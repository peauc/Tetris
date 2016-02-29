/*
** parsing.h for parsing in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Mon Feb 29 19:30:53 2016 Clement Peau
** Last update Mon Feb 29 21:05:06 2016 Clement Peau
*/

#ifndef _PARSING_H_
# define _PARSING_H_

# include <dirent.h>
# include <stdlib.h>
# include <stdio.h>

/*
**PARSING
*/
int	parsing();
int	export_files();

char	*my_strcat_name(char *, char *);

#endif /* !_PARSING_H_ */
