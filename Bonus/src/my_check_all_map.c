/*
** my_check_all_map.c for  in /home/AmOrAA/Delivery/Tetris/tetris
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Wed Mar  1 13:12:50 2017 Florian Testu
** Last update Sun Mar 19 17:54:04 2017 Florian Testu
*/

#include "tetris.h"

char	**check_my_map(char **tab, int i, int j, t_compt c)
{
  if (i == 0 && j == 0 || i == c.haut + 1 && j == c.larg + 1 ||
      i == c.haut + 1 && j == 0 || i == 0 && j == c.larg + 1)
    tab[i][j] = '+';
  else if (i == 0 && j > 0 && j < c.larg + 1  ||
	   i == c.haut + 1  && j > 0 && j < c.larg + 1)
    tab[i][j] = '-';
  else if (j == 0 && i > 0 && i < c.haut + 1
	   || j == c.larg + 1 && i > 0 && i < c.haut + 1)
    tab[i][j] = '|';
  else
    tab[i][j] = ' ';
  return (tab);
}

char	**check_my_map_score(char **map, int i, int j)
{
  if (i == 0 && j == 0 || i == 9 && j == 27)
    map[i][j] = '/';
  else if (i == 0 && j == 27 || i == 9 && j == 0)
    map[i][j] = 92;
  else if (i == 0 && j > 0 || i == 9 && j > 0 && j < 28)
    map[i][j] = '-';
  else if (j == 0 && i > 0 && i < 9 || j == 27 && i > 0 && i < 9)
    map[i][j] = '|';
  else
    map[i][j] = ' ';
  return (map);
}

char	**check_my_map_tetrimino(char **tetri, int i, int j)
{
  if (i == 0 && j == 0 || i == 5 && j == 9)
    tetri[i][j] = '/';
  else if (i == 0 && j == 9 || i == 5 && j == 0)
    tetri[i][j] = 92;
  else if (i == 0 && j > 0 && j < 9 || i == 5 && j > 0 && j < 9)
    tetri[i][j] = '-';
  else if (j == 0 && i > 0 && i < 5 || j == 9 && i > 0 && i < 5)
    tetri[i][j] = '|';
  else
    tetri[i][j] = ' ';
  return (tetri);
}
