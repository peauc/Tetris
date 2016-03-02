/*
** parsing.h for parsing in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Mon Feb 29 19:30:53 2016 Clement Peau
** Last update Wed Mar  2 18:22:29 2016 Clement Peau
*/

#ifndef _PARSING_H_
# define _PARSING_H_

/*
**SYSTEMLIBS
*/
# include <dirent.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/stat.h>
# include <fcntl.h>

/*
**PERSONNAL HEADERS
*/
# include "linked_list.h"
# include "tetris.h"

typedef struct s_tetriminos t_tetriminos;
/*
**PARSING
*/
int	parsing();
int	export_files();
int	add_infos_to_list(t_tetriminos *, char *);
char	*get_next_line(const int);
char	*my_strcat_name(char *, char *);
char	**get_tetriminos(int , int);

#endif /* !_PARSING_H_ */
