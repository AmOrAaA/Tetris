/*
** fonc_mouv.c for  in /home/AmOrAA/Delivery/Tetris/tetris2
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Wed Mar 15 18:57:37 2017 Florian Testu
** Last update Sun Mar 19 17:44:58 2017 Florian Testu
*/

#include "tetris.h"

int	end_tab(char **tab)
{
  int   p;

  while (tab[++p] != NULL);
  p = p - 1;
  return (p);
}

char	**cond_mouv_right(char **tab, int x, int j)
{
  if (tab[x][j] == '*')
    {
      tab[x][j + 1] = '*';
      if (tab[x][j - 1] != '|' && tab[x][j - 1] != '#')
        tab[x][j] = tab[x][j - 1];
      else
        tab[x][j] = ' ';
    }
  return (tab);
}
