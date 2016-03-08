/*
** help_mode.c for help in /home/peau_c/rendu/PSU/PSU_2015_tetris
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Tue Mar  8 17:24:23 2016 Clement Peau
** Last update Tue Mar  8 18:01:41 2016 Clement Peau
*/

#include "options.h"

void	help_mode(t_game *game, char *name)
{
  my_printf("Usage: %s [options]\nOptions:\n", name);
  my_printf("  --help                 Display this help\n");
  my_printf("  -l --level={num}       Start Tetris at level num\n");
  my_printf("  -kl --key-left={K}     Move tetrimino on LEFT with key K\n");
  my_printf("  -kr --key-right={K}    Move tetrimino on RIGHT with key K\n");
  my_printf("  -kt --key-turn={K}     Turn tetrimino with key K\n");
  my_printf("  -kd --key-drop={K}     Set default DROP on key K\n");
  my_printf("  -kq --key-quit={K}     Quit program when press key K\n");
  my_printf("  -kp --key-pause={K}    Pause ");
  my_printf("and restart game when press key K\n");
  my_printf("  --map-size={row,col}   Set game size at row, col\n");
  my_printf("  -w --without-next      Hide next tetriminos\n");
  my_printf("  -d --debug             Debug mode\n");
}
