/*
** annex_for_compa.c for annex_for_compa in /home/Viper/PSU/bork/src
** 
** Made by Boussé Mathieu
** Login   <Viper@epitech.net>
** 
** Started on  Sat Mar 11 16:57:22 2017 Boussé Mathieu
** Last update Sun Mar 19 17:32:29 2017 Florian Testu
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
