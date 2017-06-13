/*
** chut_tetri.c for  in /home/AmOrAA/Delivery/Tetris/tetris/src
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Thu Mar  9 18:47:46 2017 Florian Testu
** Last update Sun Mar 19 17:38:14 2017 Boussé Mathieu
*/

#include "tetris.h"

char		**take_in_tetri(char ***tetr)
{
  static int	i = -1;
  int		j;

  j = -1;
  while (++i != 7)
    return (tetr[i]);
  if (i == j)
    i = 0;
}

char	**cond_tetri(char **tab, int i, int j)
{
  if (tab[i][j] == '*' && tab[i + 1][j] != '-' && tab[i + 1][j] != '#')
    {
      tab[i][j] = ' ';
      tab[i + 1][j] = '*';
    }
  return (tab);
}

char	**chut_tetri(char **tab, int *lol)
{
  int	i;
  int	j;

  i = 0;
  while (tab[++i] != NULL);
  while (--i != 0)
    {
      j = -1;
      while (tab[i][++j] != '\0')
        {
          if (i < 21)
            {
              if (tab[i][j] == '*' && tab[i + 1][j] == '-'
                  || tab[i][j] == '*' && tab[i + 1][j] == '#' ||
		  tab[i][j] == '*' &&
		  tab[i][j + 1] == '*' && tab[i + 1][j + 1] == '#')
                {
                  lol[0] = 1;
                  return (tab);
                }
              tab = cond_tetri(tab, i, j);
            }
        }
    }
  return (tab);
}

char	**chang_tab(char **tab)
{
  int	i;
  int	j;

  i = -1;
  while (tab[++i] != NULL)
    {
      j = -1;
      while (tab[i][++j] != '\0')
        {
          if (tab[i][j] == '*')
            tab[i][j] = '#';
        }
    }
  return (tab);
}

char	**chang_tab2(char **tab)
{
  int	i;
  int	j;

  i = -1;
  while (tab[++i] != NULL)
    {
      j = -1;
      while (tab[i][++j] != '\0')
        {
          if (tab[i][j] == '#')
            tab[i][j] = '*';
        }
    }
  return (tab);
}
