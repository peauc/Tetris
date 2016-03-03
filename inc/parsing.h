/*
** parsing.h for parsing in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Mon Feb 29 19:30:53 2016 Clement Peau
** Last update Thu Mar  3 12:56:01 2016 Clement Peau
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
int	add_infos_to_list(t_tetriminos *, char *);
int	export_files();
int	check_name(char *);
int	get_first_line(t_tetriminos *, char *);
int	get_length_of_file(char *);
char	*get_file_name(char *);
int	parsing();
char	*get_next_line(const int);
char	*my_strcat_name(char *, char *);
char	**get_tetriminos(int , int);
void	check_size_error(t_tetriminos *, char *);
#endif /* !_PARSING_H_ */
