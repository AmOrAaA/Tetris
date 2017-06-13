/*
** creat_all_map.c for  in /home/AmOrAA/Delivery/Tetris/tetris/src
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Thu Mar  2 16:14:38 2017 Florian Testu
** Last update Sun Mar 19 17:39:55 2017 Florian Testu
*/

#include "tetris.h"

int	my_map_score()
{
  int	i;
  int	j;
  char	**map;
  int	line;

  i = -1;
  line = 10;
  if ((map = malloc(sizeof(char*) * 11)) == NULL)
    return (84);
  while (++i != 10)
    {
      j = -1;
      if ((map[i] = malloc(sizeof(char) * 30)) == NULL)
	return (84);
      while (++j != 28)
	map = check_my_map_score(map, i, j);
      map[i][j] = '\n';
      map[i][j + 1] = '\0';
      mvprintw(LINES / LINES + line, COLS / COLS + 5, "%s", map[i]);
      line++;
    }
  map[i] = NULL;
}

char	**my_print_map(char **tab, t_compt c)
{
  int	i;
  int	j;

  i = -1;
  clear();
  if ((tab = malloc(sizeof(char*) * (c.haut + 3))) == NULL)
    return (NULL);
  while (++i != c.haut + 2)
    {
      if ((tab[i] = malloc(sizeof(char) * (c.larg + 4))) == NULL)
	return (NULL);
      j = -1;
      while (++j != c.larg + 2)
	tab = check_my_map(tab, i, j, c);
      tab[i][j] = '\n';
      tab[i][j + 1] = '\0';
    }
  tab[i] = NULL;
  return (tab);
}

int	my_map_tetrimino()
{
  int	i;
  int	j;
  char	**tetri;
  int	line;

  i = -1;
  line = 0;
  if ((tetri = malloc(sizeof(char*) * 8)) == NULL)
    return (84);
  while (++i != 6)
    {
      if ((tetri[i] = malloc(sizeof(char) * 12)) == NULL)
	return (84);
      j = -1;
      while (++j != 10)
	tetri = check_my_map_tetrimino(tetri, i, j);
      tetri[i][j] = '\n';
      tetri[i][j + 1] = '\0';
      mvprintw(LINES / LINES + line, COLS / 2 + 10 , "%s", tetri[i]);
      line++;
    }
  tetri[i + 1] = NULL;
}

int	take_number1_map(char *ptr)
{
  char	ttr[100];
  int	j;
  int	haut;
  int	i;

  j = 0;
  i = -1;
  while (ptr[++i] != ',')
    {
      ttr[j] = ptr[i];
      j = j + 1;
    }
  ttr[j] = '\0';
  haut = my_getnbr(ttr);
  return (haut);
}

int	take_number2_map(char *ptr, int i)
{
  char	mtr[100];
  int	j;
  int	larg;

  j = -1;
  while (ptr[++i] != '\0')
    mtr[++j] = ptr[i];
  mtr[j + 1] = '\0';
  larg = my_getnbr(mtr);
  return (larg);
}
