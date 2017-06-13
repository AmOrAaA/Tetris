/*
** annex_comm.c for annex_comm in /home/Viper/PSU/bork/src
** 
** Made by Boussé Mathieu
** Login   <Viper@epitech.net>
** 
** Started on  Wed Mar  1 18:34:43 2017 Boussé Mathieu
** Last update Sun Mar 19 17:34:11 2017 Boussé Mathieu
*/

#include "tetris.h"

int	my_nvgetnbr(char c)
{
  int	nb;
  char	*str;

  str = NULL;
  str = xmalloc(2, str);
  str[0] = c;
  str[1] = '\0';
  my_strlen(str);
  nb = my_ngetnbr(str);
  return (nb);
}

int	my_nstrlen(char *str)
{
  int	res;

  res = my_strlen(str);
  while (str[res] && str[res] != '*')
    res--;
  return (res);
}

int	remove_space(char *str)
{
  int	i;
  int	cmp;

  cmp = 0;
  i = 0;
  while (str[i] != '\0')
    i++;
  while (i != 0 && str[i - 1] == ' ')
    {
      i--;
      cmp++;
    }
  return (cmp);
}

int	my_fake_tetrimino(char **tetr, char *name, int bal)
{
  int	nb1;
  int	nb2;
  int	i;
  int	ret;

  i = 0;
  ret = 0;
  nb1 = my_nvgetnbr(tetr[0][0]);
  nb2 = my_nvgetnbr(tetr[0][2]);
  while (tetr[i])
    {
      if (i != 0 && (my_nstrlen(tetr[i]) > (nb1 + remove_space(tetr[i]))))
	ret = -1;
      i++;
    }
  i = i - 1;
  if (i != 1)
    i--;
  if (i != nb2)
    ret = -1;
  if ((ret != 0 && bal == 1) || check_fake_tetri(tetr, &ret) == 1)
    my_printf("Tetriminos : Name %s : Error\n", name);
  return (ret);
}

t_key	my_modif_key_4(t_key key, int ac, char **av, int i)
{
  ac = ac;
  if (av[i][2] == 'k' && av[i][3] == 'e' && av[i][4] == 'y' && av[i][5] == '-')
    {
      if (av[i][6] == 'd' && av[i][7] == 'r' && av[i][8] == 'o')
        {
          key.drop[0] = av[i][9];
          key.drop[1] = '\0';
        }
      if (av[i][6] == 'q' && av[i][7] == 'u' && av[i][8] == 'i')
        {
          key.quit[0] = av[i][9];
          key.quit[1] = '\0';
        }
      if (av[i][6] == 'p' && av[i][7] == 'a' && av[i][8] == 'u')
        {
          key.pause[0] = av[i][9];
          key.turn[1] = '\0';
        }
    }
  return (key);
}
