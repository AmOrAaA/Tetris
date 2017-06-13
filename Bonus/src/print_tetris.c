/*
** print_tetris.c for  in /home/AmOrAA/Delivery/Tetris/PUSH/PSU_2016_tetris/Bonus
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Sat Mar 18 14:30:28 2017 Florian Testu
** Last update Sun Mar 19 18:04:08 2017 Florian Testu
*/

#include "tetris.h"

void	my_print_t()
{
  start_color();
  init_pair(1, 0, COLOR_RED);
  attron(COLOR_PAIR(1));
  mvprintw(LINES / LINES , COLS / 2 - 15, "      ");
  mvprintw(LINES / LINES + 1, COLS / 2 - 13, "  ");
  mvprintw(LINES / LINES + 2, COLS / 2 - 13, "  ");
  mvprintw(LINES / LINES + 3, COLS / 2 - 13, "  ");
  mvprintw(LINES / LINES + 4, COLS / 2 - 13, "  ");
  attroff(COLOR_PAIR(1));
  start_color();
  init_pair(2, 0, COLOR_BLUE);
  attron(COLOR_PAIR(2));
  mvprintw(LINES / LINES , COLS / 2 - 7, "      ");
  mvprintw(LINES / LINES + 1, COLS / 2 - 7, "  ");
  mvprintw(LINES / LINES + 2, COLS / 2 - 7, "    ");
  mvprintw(LINES / LINES + 3, COLS / 2 - 7, "  ");
  mvprintw(LINES / LINES + 4, COLS / 2 - 7, "      ");
  attroff(COLOR_PAIR(2));
  my_print_t2();
}

void	my_print_t2()
{
  start_color();
  init_pair(3, 0, COLOR_YELLOW);
  attron(COLOR_PAIR(3));
  mvprintw(LINES / LINES , COLS / 2, "      ");
  mvprintw(LINES / LINES + 1, COLS / 2 + 2, "  ");
  mvprintw(LINES / LINES + 2, COLS / 2 + 2, "  ");
  mvprintw(LINES / LINES + 3, COLS / 2 + 2, "  ");
  mvprintw(LINES / LINES + 4, COLS / 2 + 2, "  ");
  attroff(COLOR_PAIR(3));
  my_print_r();
}

void	my_print_r()
{
  start_color();
  init_pair(4, COLOR_GREEN, COLOR_GREEN);
  attron(COLOR_PAIR(4));
  mvprintw(LINES / LINES , COLS / 2 + 7, "       ");
  mvprintw(LINES / LINES + 1, COLS / 2 + 7, "  ");
  mvprintw(LINES / LINES + 1, COLS / 2 + 13, " ");
  mvprintw(LINES / LINES + 2, COLS / 2 + 7, "  ");
  mvprintw(LINES / LINES + 2, COLS / 2 + 10, "    ");
  mvprintw(LINES / LINES + 3, COLS / 2 + 7, "  ");
  mvprintw(LINES / LINES + 3, COLS / 2 + 10, "  ");
  mvprintw(LINES / LINES + 4, COLS / 2 + 7, "  ");
  mvprintw(LINES / LINES + 4, COLS / 2 + 12, "  ");
  attroff(COLOR_PAIR(4));
  my_print_i();
}

void	my_print_i()
{
  start_color();
  init_pair(5, COLOR_MAGENTA, COLOR_MAGENTA);
  attron(COLOR_PAIR(5));
  mvprintw(LINES / LINES , COLS / 2 + 16, "  ");
  mvprintw(LINES / LINES + 2, COLS / 2 + 16, "  ");
  mvprintw(LINES / LINES + 3, COLS / 2 + 16, "  ");
  mvprintw(LINES / LINES + 4, COLS / 2 + 16, "  ");
  attroff(COLOR_PAIR(5));
  my_print_s();
}

void	my_print_s()
{
  start_color();
  init_pair(6, COLOR_WHITE, COLOR_WHITE);
  attron(COLOR_PAIR(6));
  mvprintw(LINES / LINES , COLS / 2 + 20, "      ");
  mvprintw(LINES / LINES + 1, COLS / 2 + 20, " ");
  mvprintw(LINES / LINES + 2, COLS / 2 + 20, "      ");
  mvprintw(LINES / LINES + 3, COLS / 2 + 25, " ");
  mvprintw(LINES / LINES + 4, COLS / 2 + 20, "      ");
  attroff(COLOR_PAIR(6));
}
