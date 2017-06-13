/*
** creat_exit_window.c for  in /home/AmOrAA/Delivery/Tetris/tetris/src
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Thu Mar  2 16:16:49 2017 Florian Testu
** Last update Sun Mar 19 11:15:41 2017 Florian Testu
*/

#include "tetris.h"

void		 init_ncurse()
{
  keypad(initscr(), TRUE);
  raw();
  noecho();
  curs_set(FALSE);
}

char		**window(char **tab)
{
  int		i;
  int		j;

  j = 0;
  i = -1;
  if (strline(tab) > LINES || strcolon(tab) > COLS)
    {
      clear();
      mvprintw(LINES / 2, (COLS / 2) - 12, "Warning, enlarge window please");
      refresh();
    }
  else
    {
      clear();
      print_t();
      my_map_score();
      while (tab[++i] != '\0')
	{
	  mvprintw(LINES / LINES + j, COLS / 2 - 13, "%s", tab[i]);
	  j++;
	}
      my_map_tetrimino();
      refresh();
    }
  return (tab);
}
