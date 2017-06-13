/*
** annex_for_compa.c for annex_for_compa in /home/Viper/PSU/bork/src
** 
** Made by Boussé Mathieu
** Login   <Viper@epitech.net>
** 
** Started on  Sat Mar 11 16:57:22 2017 Boussé Mathieu
** Last update Sat Mar 11 17:31:46 2017 Boussé Mathieu
*/

#include "tetris.h"

char	**comptatetr(char **tab)
{
  int	i;
  int	x;

  i = 0;
  while (tab[i])
    {
      x = 0;
      while (tab[i][x])
	{
	  if (tab[i][x] == '\n')
	    tab[i][x] = '\0';
	  x++;
	}
      i++;
    }
  return (tab);
}
