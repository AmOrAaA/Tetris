/*
** mouv.c for  in /home/AmOrAA/Delivery/Tetris/tetris2
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Tue Mar 14 21:21:20 2017 Florian Testu
** Last update Sun Mar 19 17:46:32 2017 Boussé Mathieu
*/

#include "tetris.h"

int	check_mov_right(char **tab)
{
  int	p;
  int	j;

  p = -1;
  while (tab[++p] != NULL)
    {
      j = -1;
      while (tab[0][++j] != '\0');
      while (--j != 0)
	{
	  if (tab[p][j] == '|' && tab[p][j - 1] == '*')
	    return (1);
	}
    }
  return (0);
}

char	**mov_right(char **tab, char *get)
{
  int	j;
  int	x;
  int	p;

  if (check_mov_right(tab) == 1)
    return (tab);
  if (my_strcmp(get, "RA") == 0)
    {
      p = end_tab(tab);
      x = 1;
      while (++x != p)
	{
	  j = -1;
	  while (tab[0][++j] != '\0');
	  j = j - 2;
	  while (j-- != 0)
	    if (tab[x][j] == '*' && tab[x][j + 1] == '|'
		|| tab[x][j] == '*' && tab[x][j + 1] == '#')
	      return (tab);
	    else
	      tab = cond_mouv_right(tab, x, j);
	}
    }
  return (tab);
}

int	check_mov_down(char **tab)
{
  int	p;
  int	j;

  p = 0;
  while (tab[++p] != NULL)
    {
      j = -1;
      while (tab[p][++j] != '\0')
      	{
	  if (tab[p][j] == '*' && tab[p + 1][j] == '-'
	      || tab[p][j] == '*' && tab[p + 1][j] == '#'
	      || tab[p][j] == '#' && tab[p - 1][j] == '*')
	    return (1);
      	}
    }
  return (0);
}

char	**mov_down(char **tab, char *get)
{
  int	j;
  int	p;

  if (check_mov_down(tab) == 1)
    return (tab);
  if (my_strcmp(get, "DA") == 0)
    {
      p = end_tab(tab);
      while (--p != 1)
	{
	  j = -1;
	  while (tab[p][++j] != '\0')
	    {
	      if (tab[p][j] == '*')
		{
		  tab[p + 1][j] = '*';
		  tab[p][j] = tab[p - 1][j];
		}
	    }
	}
    }
  return (tab);
}
