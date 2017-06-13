/*
** print_my_loose.c for  in /home/AmOrAA/Delivery/Tetris/PUSH/PSU_2016_tetris/Bonus/src
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Sat Mar 18 18:28:56 2017 Florian Testu
** Last update Sun Mar 19 18:03:34 2017 Florian Testu
*/

#include "tetris.h"

void	print_loose_1()
{
  mvprintw(LINES / 2 - 15, COLS / 2 + 6, " ");
  mvprintw(LINES / 2 - 15, COLS / 2 + 11, " ");
  mvprintw(LINES / 2 - 14, COLS / 2 + 6, " ");
  mvprintw(LINES / 2 - 14, COLS / 2 + 11, " ");
  mvprintw(LINES / 2 - 13, COLS / 2 + 6, " ");
  mvprintw(LINES / 2 - 13, COLS / 2 + 11, " ");
  mvprintw(LINES / 2 - 12, COLS / 2 + 6, " ");
  mvprintw(LINES / 2 - 12, COLS / 2 + 11, " ");
  mvprintw(LINES / 2 - 11, COLS / 2 + 6, " ");
  mvprintw(LINES / 2 - 11, COLS / 2 + 11, " ");
  mvprintw(LINES / 2 - 10, COLS / 2 + 6, "      ");
  mvprintw(LINES / 2 - 5, COLS / 2 - 7, " ");
  mvprintw(LINES / 2 - 4, COLS / 2 - 7, " ");
  mvprintw(LINES / 2 - 3, COLS / 2 - 7, " ");
  mvprintw(LINES / 2 - 2, COLS / 2 - 7, " ");
  mvprintw(LINES / 2 - 1, COLS / 2 - 7, " ");
  mvprintw(LINES / 2 - 0, COLS / 2 - 7, "      ");
  print_loose_2();
}

void	print_loose_2()
{
  mvprintw(LINES / 2 - 15, COLS / 2 + 6, " ");
  mvprintw(LINES / 2 - 15, COLS / 2 + 11, " ");
  mvprintw(LINES / 2 - 14, COLS / 2 + 6, " ");
  mvprintw(LINES / 2 - 14, COLS / 2 + 11, " ");
  mvprintw(LINES / 2 - 13, COLS / 2 + 6, " ");
  mvprintw(LINES / 2 - 13, COLS / 2 + 11, " ");
  mvprintw(LINES / 2 - 12, COLS / 2 + 6, " ");
  mvprintw(LINES / 2 - 12, COLS / 2 + 11, " ");
  mvprintw(LINES / 2 - 11, COLS / 2 + 6, " ");
  mvprintw(LINES / 2 - 11, COLS / 2 + 11, " ");
  print_loose_3();
}

void	print_loose_3()
{
  mvprintw(LINES / 2 - 5, COLS / 2 , "     ");
  mvprintw(LINES / 2 - 4, COLS / 2 , " ");
  mvprintw(LINES / 2 - 4, COLS / 2 + 4, " ");
  mvprintw(LINES / 2 - 3, COLS / 2 , " ");
  mvprintw(LINES / 2 - 3, COLS / 2 + 4, " ");
  mvprintw(LINES / 2 - 2, COLS / 2, " ");
  mvprintw(LINES / 2 - 2, COLS / 2 + 4, " ");
  mvprintw(LINES / 2 - 1, COLS / 2, " ");
  mvprintw(LINES / 2 - 1, COLS / 2 + 4, " ");
  mvprintw(LINES / 2 - 0, COLS / 2, "     ");
  print_loose_4();
}

void	print_loose_4()
{
  mvprintw(LINES / 2 - 5, COLS / 2 + 6 , "     ");
  mvprintw(LINES / 2 - 4, COLS / 2 + 6, " ");
  mvprintw(LINES / 2 - 3, COLS / 2 + 6, "     ");
  mvprintw(LINES / 2 - 2, COLS / 2 + 10, " ");
  mvprintw(LINES / 2 - 1, COLS / 2 + 10, " ");
  mvprintw(LINES / 2 - 0, COLS / 2 + 6, "     ");
  mvprintw(LINES / 2 - 5, COLS / 2 + 12 , "     ");
  mvprintw(LINES / 2 - 4, COLS / 2 + 12, " ");
  mvprintw(LINES / 2 - 3, COLS / 2 + 12, "     ");
  mvprintw(LINES / 2 - 2, COLS / 2 + 12, " ");
  mvprintw(LINES / 2 - 1, COLS / 2 + 12, " ");
  mvprintw(LINES / 2 - 0, COLS / 2 + 12, "     ");
}
