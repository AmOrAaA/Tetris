/*
** fonc_loose.c for  in /home/AmOrAA/Delivery/Tetris/PUSH/PSU_2016_tetris/Bonus/src
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Sat Mar 18 18:46:52 2017 Florian Testu
** Last update Sun Mar 19 17:43:37 2017 Florian Testu
*/

#include "tetris.h"

void		print_loose()
{
  start_color();
  init_pair(8, COLOR_WHITE, COLOR_WHITE);
  attron(COLOR_PAIR(8));
  mvprintw(LINES / 2 - 15, COLS / 2 - 11, " ");
  mvprintw(LINES / 2 - 15, COLS / 2 - 5, " ");
  mvprintw(LINES / 2 - 14, COLS / 2 - 10, " ");
  mvprintw(LINES / 2 - 14, COLS / 2 - 6, " ");
  mvprintw(LINES / 2 - 13, COLS / 2 - 9, " ");
  mvprintw(LINES / 2 - 13, COLS / 2 - 7, " ");
  mvprintw(LINES / 2 - 12, COLS / 2 - 8, " ");
  mvprintw(LINES / 2 - 11, COLS / 2 - 8, " ");
  mvprintw(LINES / 2 - 10, COLS / 2 - 8, " ");
  mvprintw(LINES / 2 - 15, COLS / 2 - 2, "      ");
  mvprintw(LINES / 2 - 14, COLS / 2 - 2, " ");
  mvprintw(LINES / 2 - 14, COLS / 2 + 3, " ");
  mvprintw(LINES / 2 - 13, COLS / 2 - 2, " ");
  mvprintw(LINES / 2 - 13, COLS / 2 + 3, " ");
  mvprintw(LINES / 2 - 12, COLS / 2 - 2, " ");
  mvprintw(LINES / 2 - 12, COLS / 2 + 3, " ");
  mvprintw(LINES / 2 - 11, COLS / 2 - 2, " ");
  mvprintw(LINES / 2 - 11, COLS / 2 + 3, " ");
  mvprintw(LINES / 2 - 10, COLS / 2 - 2, "      ");
  print_loose_1();
  attroff(COLOR_PAIR(8));
}

void		my_print_end_or_newgame()
{
  print_loose();
  start_color();
  init_pair(7, COLOR_BLACK, COLOR_WHITE);
  attron(COLOR_PAIR(7));
  mvprintw(LINES / 2 + 5, COLS / 2, "RESTART ?");
  mvprintw(LINES / 2 + 7, COLS / 2 - 8, "'Pres 'SPACE' for new game'");
  mvprintw(LINES / 2 + 9, COLS / 2, "EXIT");
  mvprintw(LINES / 2 + 11, COLS / 2 - 8, "'Press 'ECHAP' for EXIT'");
  attroff(COLOR_PAIR(7));
}

void		fonc_new_game_or_not(sfMusic *fail, char ***tetr, t_norm norm)
{
  char		*get;
  sfMusic	*wat;

  wat = sfMusic_createFromFile("Musique_d_39_ascenceur_10_minutes_2_.ogg");
  sfMusic_play(wat);
    while (1)
    {
      get = my_getch();
      if (get != NULL && get[0] == 27 && get[1] == '\0')
        {
          sfMusic_stop(wat);
          close_window(27);
        }
      else if (get != NULL && get[0] == 32 && get[1] == '\0')
        {
          sfMusic_stop(wat);
	  clear();
          take_number_map(norm.ltr, tetr);
        }
      usleep(100000);
    }
}

void		new_game_or_not(char ***tetr, t_norm norm)
{
  sfMusic	*fail;
  sfMusic	*wat;
  char		*get;

  sfMusic_stop(norm.music);
  fail = sfMusic_createFromFile("Tetris_-_Game_Over.ogg");
  sfMusic_play(fail);
  sleep(4);
  sfMusic_stop(fail);
  endwin();
  clear();
  init_ncurse();
  my_print_t();
  refresh();
  my_print_end_or_newgame();
  refresh();
  fonc_new_game_or_not(fail, tetr, norm);
  exit(0);
}

void		end_game(char ***tetr, int tet, t_norm norm)
{
  int		i;
  int		j;
  char		c;
  int		compt;
  int		result;

  result = tet;
  i = -1;
  c = tetr[result][0][3];
  j = my_getnbr("c");
  j = j + 1;
  compt = -1;
  while (norm.tab[0][compt] != '\0');
  compt = compt / 2;
  while (norm.tab[j][++i] != '\0')
    {
      if (i >= compt && norm.tab[j][i] == '#')
	new_game_or_not(tetr, norm);
    }
}
