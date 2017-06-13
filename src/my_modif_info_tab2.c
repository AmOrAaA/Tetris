/*
** my_modif_info_tab2.c for  in /home/AmOrAA/Delivery/Tetris/PSU2/PSU_2016_tetris/src
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Sun Mar 19 16:23:55 2017 Florian Testu
** Last update Sun Mar 19 19:44:19 2017 Florian Testu
*/

#include "tetris.h"

void		my_modif_compt_map(time_t start, int *score, int *lign, int *lvl)
{
  time_t	result;

  result = time(NULL);
  mvprintw(LINES / LINES + 12, COLS / COLS + 6, "High Score\twow");
  mvprintw(LINES / LINES + 13, COLS / COLS + 6, "Score\t\t%d", score[0]);
  mvprintw(LINES / LINES + 15, COLS / COLS + 6, "Lines\t\t%d", lign[0]);
  mvprintw(LINES / LINES + 16, COLS / COLS + 6, "Level\t\t%d", lvl[0]);
  mvprintw(LINES / LINES + 18, COLS / COLS + 6, "Timer\t\t%d", result - start);
  refresh();
}

void	my_modif_compt_map2(char ***tetr, int tet)
{
  int	i;

  i = 0;
  if (tet + 1 > 6)
    tet = 0;
  if (tetr[tet + 1])
    while (tetr[tet + 1][++i] != NULL)
      mvprintw(LINES / LINES + i, COLS / 2 + 14, "%s", tetr[tet + 1][i]);
  refresh();
}

void	end_game(char ***tetr, int tet, char **tab)
{
  int	i;
  int	j;
  char	c;
  int	compt;
  int	result;

  result = tet;
  i = -1;
  c = tetr[result][0][3];
  j = my_getnbr("c");
  j = j + 1;
  compt = -1;
  while (tab[0][compt] != '\0');
  compt = compt / 2;
  while (tab[j][++i] != '\0')
    {
      if (i >= compt && tab[j][i] == '#')
        {
          endwin();
          exit (0);
        }
    }
}
