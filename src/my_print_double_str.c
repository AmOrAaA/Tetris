/*
** my_print_double_str.c for my_print_double_str in /home/Viper/PSU/PSU_2016_minishell1/src
** 
** Made by Boussé Mathieu
** Login   <Viper@epitech.net>
** 
** Started on  Tue Jan 17 09:56:41 2017 Boussé Mathieu
** Last update Sun Mar 19 17:57:08 2017 Boussé Mathieu
*/

#include "tetris.h"

void	my_start_print_double_str(char **str, int start)
{
  int	a;

  a = start;
  while (str[a])
    {
      my_putstr(str[a]);
      if (str[a + 1] != NULL)
	my_putchar('\n');
      a++;
    }
}

void	my_print_double_str(char **str)
{
  int	a;

  a = 0;
  while (str[a])
    {
      my_putstr(str[a]);
      my_putchar('\n');
      a++;
    }
}
