/*
** check_tetrimino.c for check_tetrimino in /home/Viper/PSU/PSU_2016_bstetris/src
** 
** Made by Boussé Mathieu
** Login   <Viper@epitech.net>
** 
** Started on  Tue Feb 21 09:19:01 2017 Boussé Mathieu
** Last update Sat Mar 18 16:47:08 2017 Boussé Mathieu
*/

#include "tetris.h"

char	**my_rempl_car(int i, char **car, char **tetr)
{
  int	c;
  int	d;

  d = 0;
  c = 0;
  while (tetr[0][i])
    {
      car[c][d] = tetr[0][i];
      i++;
      d++;
      if (tetr[0][i] == ' ')
	{
	  car[c][d] = '\0';
	  c++;
	  i++;
	  d = 0;
	}
    }
  car[c][d] = '\0';
  return (car);
}

char	**my_part_2(char **tetr, char *buff, int c, int i)
{
  int	a;

  a = 0;
  i = 0;
  c = 0;
  while (buff[c])
    {
      if (buff[c] == '\n')
	{
	  tetr[i][a] = '\0';
	  c++;
	  i++;
	  a = 0;
	}
      tetr[i][a] = buff[c];
      a++;
      if (buff[c])
	c++;
    }
  if (tetr[i])
    tetr[i][a] = '\0';
  return (tetr);
}

char	**my_rempl_tetr(char **tetr, char *buff, int i)
{
  int	c;
  int	co;

  co = 0;
  c = 0;
  while (buff[c])
    {
      if (buff[c] == '\n')
	co++;
      c++;
    }
  c = 0;
  while (c <= co)
    {
      tetr[c] = xmalloc(i, tetr[c]);
      c++;
    }
  tetr[c] = NULL;
  tetr = my_part_2(tetr, buff, c, i);
  return (tetr);
}

t_check		my_check_malloc(t_check check)
{
  check.car = xxmalloc(sizeof(char *) * 4, check.car);
  check.buff = xmalloc(1001, check.buff);
  check.tetr = xxmalloc(sizeof(char *) * 25, check.tetr);
  return (check);
}

char		**check_tetrimino(int fd, char *str, int bal)
{
  t_check	check;

  check = my_check_malloc(check);
  check.i = read(fd, check.buff, 1000);
  check.buff[check.i] = '\0';
  check.tetr = my_rempl_tetr(check.tetr, check.buff, check.i);
  check.i = 0;
  while (check.i != 3)
    {
      check.car[check.i] = xmalloc(my_strlen(check.tetr[0]) + 1,
				   check.car[check.i]);
      check.i++;
    }
  check.car[check.i] = NULL;
  check.i = 0;
  my_rempl_car(check.i, check.car, check.tetr);
  if (str != NULL && check.tetr != NULL &&
      my_fake_tetrimino(check.tetr, str, bal) == 0)
    {
      if (bal == 1)
	eco_check(str, check);
    }
  else
    check.tetr[0] = my_strdup("false");
  return (check.tetr);
}
