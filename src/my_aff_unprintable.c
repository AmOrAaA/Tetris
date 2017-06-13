/*
** my_aff_unprintable.c for my_aff_unprintable in /home/Viper/PSU_2016_tetris/src
** 
** Made by Boussé Mathieu
** Login   <Viper@epitech.net>
** 
** Started on  Sat Mar 18 21:15:41 2017 Boussé Mathieu
** Last update Sun Mar 19 16:33:47 2017 Florian Testu
*/

#include "tetris.h"

void	my_aff_unprintable(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] == 27)
	my_putstr("^E");
      else
	my_putchar(str[i]);
      i++;
    }
  my_putchar('\n');
}
