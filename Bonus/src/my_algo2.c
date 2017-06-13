/*
** my_algo2.c for  in /home/AmOrAA/Delivery/Tetris/PSU2/PSU_2016_tetris/Bonus/src
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Sun Mar 19 15:25:54 2017 Florian Testu
** Last update Sun Mar 19 17:51:10 2017 Florian Testu
*/

#include "tetris.h"

int	check2mov_down(char **tab, int sped)
{
  if (check_mov_down(tab) != 0)
    {
      sped = sped - 1000;
      return (1);
    }
  return (0);
}

int	check_lol(int lol, int sped)
{
  if (lol == 1)
    {
      sped = sped - 1000;
      return (1);
    }
  return (0);
}

char	**mov1(char **tab, char *get)
{
  tab = mov_left(tab, get);
  tab = mov_right(tab, get);
  return (tab);
}

char	**mov2(char **tab, char *get, int lol)
{
  tab = mov_down(tab, get);
  tab = chut_tetri(tab, &lol);
  return (tab);
}

char	**check_down_line(int *i, char **tab)
{
  int	j;

  j = -1;
  while (tab[i[0]][++j] != '\0')
    {
      if (tab[i[0]][j] == '#')
        tab[i[0]][j] = ' ';
    }
  return (tab);
}
