/*
** my_print_tetris.c for  in /home/AmOrAA/Delivery/Tetris/PSU_2016_tetris/src
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Mon Feb 27 21:16:21 2017 Florian Testu
** Last update Sun Mar 19 18:02:06 2017 Florian Testu
*/

#include "tetris.h"

void	print_t()
{
  start_color();
  init_pair(1, COLOR_RED, 0);
  attron(COLOR_PAIR(1));
  mvprintw(LINES / LINES , COLS / COLS, "* * * ");
  mvprintw(LINES / LINES + 1, COLS / COLS, "  *   ");
  mvprintw(LINES / LINES + 2, COLS / COLS, "  *   ");
  mvprintw(LINES / LINES + 3, COLS / COLS, "  *   ");
  mvprintw(LINES / LINES + 4, COLS / COLS, "  *   ");
  attroff(COLOR_PAIR(1));
  start_color();
  init_pair(2, COLOR_BLUE, 0);
  attron(COLOR_PAIR(2));
  mvprintw(LINES / LINES , COLS / COLS + 7, "* * * ");
  mvprintw(LINES / LINES + 1, COLS / COLS + 7, "*     ");
  mvprintw(LINES / LINES + 2, COLS / COLS + 7, "* *   ");
  mvprintw(LINES / LINES + 3, COLS / COLS + 7, "*     ");
  mvprintw(LINES / LINES + 4, COLS / COLS + 7, "* * * ");
  attroff(COLOR_PAIR(2));
  print_t2();
}

void	print_t2()
{
  start_color();
  init_pair(3, COLOR_YELLOW, 0);
  attron(COLOR_PAIR(3));
  mvprintw(LINES / LINES , COLS / COLS + 14, "* * * ");
  mvprintw(LINES / LINES + 1, COLS / COLS + 14, "  *   ");
  mvprintw(LINES / LINES + 2, COLS / COLS + 14, "  *   ");
  mvprintw(LINES / LINES + 3, COLS / COLS + 14, "  *   ");
  mvprintw(LINES / LINES + 4, COLS / COLS + 14, "  *   ");
  attroff(COLOR_PAIR(3));
  print_r();
}

void	print_r()
{
  start_color();
  init_pair(4, COLOR_GREEN, 0);
  attron(COLOR_PAIR(4));
  mvprintw(LINES / LINES , COLS / COLS + 21, "* * * ");
  mvprintw(LINES / LINES + 1, COLS / COLS + 21, "*   * ");
  mvprintw(LINES / LINES + 2, COLS / COLS + 21, "* *   ");
  mvprintw(LINES / LINES + 3, COLS / COLS + 21, "*   * ");
  mvprintw(LINES / LINES + 4, COLS / COLS + 21, "*   * ");
  attroff(COLOR_PAIR(4));
  print_i();
}

void	print_i()
{
  start_color();
  init_pair(5, COLOR_MAGENTA, 0);
  attron(COLOR_PAIR(5));
  mvprintw(LINES / LINES , COLS / COLS + 28, "* ");
  mvprintw(LINES / LINES + 1, COLS / COLS + 28, "  ");
  mvprintw(LINES / LINES + 2, COLS / COLS + 28, "* ");
  mvprintw(LINES / LINES + 3, COLS / COLS + 28, "* ");
  mvprintw(LINES / LINES + 4, COLS / COLS + 28, "* ");
  attroff(COLOR_PAIR(5));
  print_s();
}

void	print_s()
{
  start_color();
  init_pair(6, COLOR_WHITE, 0);
  attron(COLOR_PAIR(6));
  mvprintw(LINES / LINES , COLS / COLS + 31, "* * * \n");
  mvprintw(LINES / LINES + 1, COLS / COLS + 31, "*     \n");
  mvprintw(LINES / LINES + 2, COLS / COLS + 31, "* * * \n");
  mvprintw(LINES / LINES + 3, COLS / COLS + 31, "    * \n");
  mvprintw(LINES / LINES + 4, COLS / COLS + 31, "* * * \n\n");
  attroff(COLOR_PAIR(6));
}
