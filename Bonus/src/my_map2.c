/*
** my_map2.c for  in /home/AmOrAA/Delivery/Tetris/PSU2/PSU_2016_tetris/Bonus/src
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Sun Mar 19 13:46:07 2017 Florian Testu
** Last update Sun Mar 19 17:56:59 2017 Florian Testu
*/

#include "tetris.h"

void		print_2()
{
  start_color();
  init_pair(8, COLOR_WHITE, COLOR_WHITE);
  attron(COLOR_PAIR(8));
  mvprintw(LINES / 2 - 4, COLS / 2, " ");
  mvprintw(LINES / 2 - 5, COLS / 2 + 1, " ");
  mvprintw(LINES / 2 - 5, COLS / 2 + 2, " ");
  mvprintw(LINES / 2 - 5, COLS / 2 + 3, " ");
  mvprintw(LINES / 2 - 4, COLS / 2 + 3, " ");
  mvprintw(LINES / 2 - 3, COLS / 2 + 2, " ");
  mvprintw(LINES / 2 - 2, COLS / 2 + 1, " ");
  mvprintw(LINES / 2 - 1, COLS / 2, " ");
  mvprintw(LINES / 2, COLS / 2, "    ");
}

void		print_3()
{
  start_color();
  init_pair(8, COLOR_WHITE, COLOR_WHITE);
  attron(COLOR_PAIR(8));
  mvprintw(LINES / 2, COLS / 2, "   ");
  mvprintw(LINES / 2 - 1, COLS / 2 + 3, " ");
  mvprintw(LINES / 2 - 2, COLS / 2, "   ");
  mvprintw(LINES / 2 - 3, COLS / 2 + 3, " ");
  mvprintw(LINES / 2 - 4, COLS / 2, "   ");
}

void		begin_tetris()
{
  sfMusic       *start;

  init_ncurse();
  my_print_t();
  refresh();
  sleep(3);
  start = sfMusic_createFromFile("SFA_Gran_turismo_3_2_1_Go_sound_effect.ogg");
  sfMusic_play(start);
  print_3();
  refresh();
  sleep(1);
  clear();
  my_print_t();
  print_2();
  refresh();
  sleep(1);
  clear();
  my_print_t();
  print_1();
  refresh();
  sleep(1);
  sfMusic_stop(start);
}
