/*
** fonc_map.c for  in /home/AmOrAA/Delivery/Tetris/PSU_2016_tetris/src
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Tue Feb 28 13:34:04 2017 Florian Testu
** Last update Sun Mar 19 17:44:27 2017 Florian Testu
*/

#include "tetris.h"

int	close_window(int i)
{
  close(27);
  endwin();
  exit(0);
  return (0);
}

int	strline(char **tab)
{
  int	colone;
  int	j;
  int	ligne;

  colone = -1;
  ligne = 0;
  while (tab[++colone] != '\0')
    {
      if (tab[colone] == '\0')
	break;
      ligne = ligne + 1;
    }
  ligne = ligne;
  return (ligne);
}

int	strcolon(char **tab)
{
  int	colone;

  colone = 0;
  while (tab[colone] != NULL)
    colone = colone + 1;
  colone = colone + 80;
  return (colone);
}
