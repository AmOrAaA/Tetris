/*
** mouv2.c for  in /home/AmOrAA/Delivery/Tetris/PSU2/PSU_2016_tetris/Bonus/src
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Sun Mar 19 12:29:39 2017 Florian Testu
** Last update Sun Mar 19 17:49:03 2017 Florian Testu
*/

#include "tetris.h"

int	check_mov_left(char **tab)
{
  int	x;
  int	j;

  x = -1;
  while (tab[++x] != NULL)
    {
      if (tab[x][1] == '*')
        return (1);
      j = 0;
      while (tab[x][++j] != '\0')
        {
          if (tab[x][j] == '#' && tab[x][j + 1] == '*')
            return (1);
        }
    }
  return (0);
}

char	**ret_mov_left(char **tab, int x, int j)
{
  if (tab[x][j] == '*' && tab[x][j - 1] != '#' && tab[x][j - 1] != '|')
    {
        tab[x][j - 1] = '*';
      if (tab[x][j + 1] != '|' && tab[x][j - 1] == ' ')
        tab[x][j] = tab[x][j + 1];
      else
        tab[x][j] = ' ';
    }
  return (tab);
}

char	**mov_left(char **tab, char *get)
{
  int	j;
  int	x;
  int	p;

  if (check_mov_left(tab) == 1)
    return (tab);
  if (my_strcmp(get, "LA") == 0)
    {
      p = end_tab(tab);
      x = 0;
      while (++x != p)
        {
          j = 0;
          while (tab[x][++j] != '\0')
            tab = ret_mov_left(tab, x, j);
        }
    }
  return (tab);
}
