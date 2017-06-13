/*
** my_algo.c for  in /home/AmOrAA/Delivery/Tetris/tetris2
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Wed Mar 15 19:17:00 2017 Florian Testu
** Last update Sun Mar 19 20:03:12 2017 Florian Testu
*/

#include "tetris.h"

char	**down_line(char **tab, int i, int ***score, int ***lign)
{
  int	j;

  tab = check_down_line(tab, &i);
  i = -1;
  while (tab[++i] != NULL);
  while (--i != 0)
    {
      j = -1;
      while (tab[i][++j] != '\0')
	{
	  if (tab[i][j] == '#' && tab[i + 1][j] == '-' && tab[i + 1][j] == '#')
	    tab[i][j] = ' ';
	  if (tab[i][j] == '#' && tab[i + 1][j] != '-')
	    {
	      tab[i][j] = ' ';
	      tab[i + 1][j] = '#';
	    }
	}
    }
  score[0][0][0] = score[0][0][0] + 50;
  lign[0][0][0] = lign[0][0][0] + 1;
  return (tab);
}

char	**check_line(char **tab, int **score, int **lign)
{
  int	i;
  int	j;
  int	x;
  int	compt;

  i = -1;
  j = -1;
  while (tab[0][++j] != '\0')
    compt = j - 2;
  while (tab[++i] != NULL);
  while (--i != 0)
    {
      x = 0;
      j = -1;
      while (tab[i][++j] != '\0')
	{
	  if (tab[i][j] == '#')
	    x = x + 1;
	}
      if (x == compt)
	tab = down_line(tab, i, &score, &lign);
    }
  return (tab);
}

int	my_else(t_norm norm, int sped, int *score, int *lign)
{
  int	lol;

  norm.get = my_getch();
  if (norm.get != NULL && norm.get[0] == 27 && norm.get[1] == '\0')
    close_window(27);
  else
    {
      lol = 0;
      norm.tab = mov1(norm.tab, norm.get);
      if (check2mov_down(norm.tab, sped) == 1)
        return (1);
      norm.tab = mov2(norm.tab, norm.get, lol);
      if (check_lol(lol, sped) == 1)
        return (1);
      norm.tab = check_line(norm.tab, &score, &lign);
    }
  return (0);
}

int            my_loop(t_norm norm, time_t start, char ***tetr, int x)
{
  static int	score = 0;
  static int	sped = 200000;
  static int	lign = 0;
  static int	lvl = 0;
  int		tet;

  if (x == 6)
    {
      lvl = lvl + 1;
      x = 0;
    }
  tet = x;
  norm.get = NULL;
  while (1)
    {
      end_game(tetr, tet, norm.tab);
      norm.tab = window(norm.tab);
      my_modif_compt_map(start, &score, &lign, &lvl);
      my_modif_compt_map2(tetr, tet);
      if (my_else(norm, sped, &score, &lign) == 1)
        break;
      usleep(sped);
    }
  return (x);
}

void		my_algo(t_norm norm, char ***tetr, time_t start)
{
  char		**tetri;
  static int	x = 0;
  int		lol;

  norm.tab = chang_tab(norm.tab);
  if (tetr[x + 1])
    norm.tab = take_my_tetrimino(norm.tab, comptatetr(tetr[++x]));
  lol = 0;
  x =  my_loop(norm , start, tetr, x);
  my_algo(norm, tetr, start);
  endwin();
  exit(0);
}
