/*
** my_display_help.c for my_display_help in /home/Viper/PSU/PSU_2016_tetris/src
** 
** Made by Boussé Mathieu
** Login   <Viper@epitech.net>
** 
** Started on  Mon Feb 27 10:50:52 2017 Boussé Mathieu
** Last update Sat Mar 18 16:32:44 2017 Boussé Mathieu
*/

#include "tetris.h"

void	my_display_help(char **av)
{
  my_printf("Usage: %s [options]\n", av[0]);
  my_putstr("Options:\n");
  my_putstr("   --help\t\tDisplay this help\n");
  my_putstr("   -l --level={num}\tStart Tetris at level num (def:  1)\n");
  my_putstr("   -kl --key-left={K}\tMove the tetrimino LEFT using the");
  my_putstr(" K key (def:  left arrow)\n");
  my_putstr("   -kr --key-right={K}\tMove the tetrimino ");
  my_putstr("RIGHT using the K key (def:  right arrow)\n");
  my_putstr("   -kt --key-turn={K}\tTURN the tetrimino clockwise");
  my_putstr(" 90d using the K key (def:  top arrow)\n");
  my_putstr("   -kd --key-drop={K}\tDROP the tetrimino using the ");
  my_putstr("K key (def:  down arrow)\n");
  my_putstr("   -kq --key-quit={K}\tQUIT the game using ");
  my_putstr("the K key (def:  'Q' key)\n");
  my_putstr("   -kp --key-pause={K}\tPAUSE/RESTART the game");
  my_putstr(" using the K key (def:  space bar)\n");
  my_putstr("   --map-size={row,col}\tSet the numbers of ");
  my_putstr("rows and columns of the map (def:  20,10)\n");
  my_putstr("   -w --without-next\tHide next tetrimino (def:  false)\n");
  my_putstr("   -d --debug\t\tDebug mode (def:  false)\n");
}

int	check_fake_tetri(char **tetr, int *ret)
{
  int	a;
  int	b;

  a = 1;
  while (tetr[a])
    {
      b = 0;
      while (tetr[a][b])
	{
	  if (tetr[a][b] != '\0' && tetr[a][b] != '*' &&
	      tetr[a][b] != '\n' && tetr[a][b] != ' ')
	    {
	      *ret = -1;
	      return (1);
	    }
	  b++;
	}
      a++;
    }
  return (0);
}
