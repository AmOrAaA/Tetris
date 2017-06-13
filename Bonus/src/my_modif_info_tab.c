/*
** my_modif_info_tab.c for my_modif_info_tav in /home/Viper/PSU/bork/src
** 
** Made by Boussé Mathieu
** Login   <Viper@epitech.net>
** 
** Started on  Fri Mar 10 18:00:20 2017 Boussé Mathieu
** Last update Sun Mar 19 17:58:53 2017 Florian Testu
*/

#include "tetris.h"

int	check_the_line(char *str)
{
  int	i;

  i = 1;
  while (str[i] != '|')
    {
      if (str[i] == ' ')
	return (0);
      i++;
    }
  return (10);
}

char	*my_clear_line(char *str)
{
  int	i;

  i = 1;
  while (str[i] != '|')
    {
      str[i] = ' ';
      i++;
    }
  return (str);
}

int	destroy_line(char **tab)
{
  int	i;
  int	res;

  i = 0;
  while (tab[i] != NULL)
    i++;
  i = i - 2;
  res = check_the_line(tab[i]);
  i--;
  if (res == 10)
    {
      while (i >= 1)
	{
	  tab[i] = my_strdup(tab[i + 1]);
	  i--;
	}
      tab[1] = my_clear_line(tab[1]);
      return (10);
    }
  return (0);
}

int	end_of_game(char **tab)
{
  int	x;

  x = 0;
  while (tab[1][x] != '\0')
    {
      if (tab[1][x] == '*')
	return (1);
      x++;
    }
  return (0);
}
