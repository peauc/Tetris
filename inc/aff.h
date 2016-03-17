/*
** aff.h for aff in /home/thoma_c/rendu/PSU_2015_tetris
**
** Made by Clement Thomas
** Login   <thoma_c@epitech.net>
**
** Started on  Tue Mar  1 22:59:22 2016 Clement Thomas
** Last update Thu Mar 17 16:06:37 2016 Clement Thomas
*/

#ifndef AFF_H_
# define AFF_H_

typedef	struct	s_tetriminos t_tetriminos;
typedef struct	s_game t_game;

typedef struct	s_board
{
  int		hight_score;
  int		score;
  int		line;
  int		level;
  int		timer;
  double       	timer_second;
  int		timer_minutes;
  WINDOW	*data_board;
  WINDOW	*game;
  WINDOW	*next;
  int		size_x;
  int		size_y;
  int		change_tetri;
  int		nb;
  t_tetriminos	*mooving;
  t_tetriminos	*next_tetri;
  int		tetri_pos_x;
  int		tetri_pos_y;
  char		**tab_board;
  int		limit;
}		t_board;

void		aff_logo_next();
void		aff_game(WINDOW *);
int		nb_tetriminos(t_tetriminos *);
t_tetriminos	*which_tetriminos(t_tetriminos *, int);
void		aff_next_tetri(WINDOW *, t_tetriminos *, int, t_board *);
int		aff_tetris(int, t_board *, t_tetriminos *, t_game *);
void		aff_board(t_board *, WINDOW *);
void		aff_logo();
int		data_board_initialize(t_board *, t_tetriminos *, t_game *);
void		my_screen(WINDOW *, t_board *, t_tetriminos *, t_game *);
int		screen_size(WINDOW *);
void		timer(WINDOW *, t_board *);
void		next_tetri(WINDOW *, t_tetriminos *);
void		aff_game(WINDOW *);
int		mid_map(int);
int		mid_tetri(t_tetriminos *, t_board *);
int		tab_game(int, int, t_board *);
int		set_tetri_to_tab(t_tetriminos *, WINDOW *,
				 t_board *);
void		data_tetri_tab(t_board *, t_tetriminos *, t_game *);
void		aff_tab_game(t_board *);
int		moove_down_tetri(t_board *, t_tetriminos *);
int		moove_down_tetri_next(t_board *, t_tetriminos *,
				      int , int);
void		aff_down_tetri(t_board *, t_tetriminos *);
void		initialize_limit(t_board *, t_tetriminos *);
void		del_down_tetri(t_board *, t_tetriminos *);

#endif /* !AFF_H_ */
