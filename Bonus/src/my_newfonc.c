/*
** my_newfonc.c for my_new_fonc in /home/Viper/PSU_2016_tetris/src
** 
** Made by Boussé Mathieu
** Login   <Viper@epitech.net>
** 
** Started on  Sat Mar 18 13:13:53 2017 Boussé Mathieu
** Last update Sun Mar 19 18:00:04 2017 Florian Testu
*/

#include "tetris.h"

char	*my_nstrcpy(char *dest, char *src)
{
  char	*str;
  int	i;

  i = 0;
  dest = xmalloc(my_strlen(src) + 4, dest);
  while (src[i])
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}

int	powten(int nb, int pow)
{
  while (pow != 0)
    {
      nb = nb * 10;
      pow--;
    }
  return (nb);
}

int	my_ngetnbr(char *str)
{
  int	nb;
  int	sign;
  int	i;
  int	compt;

  compt = 0;
  i = 0;
  sign = 1;
  nb = 0;
  while (str[i] && (str[i] == '-' || str[i] == '+'))
    {
      if (str[i] == '-')
	sign = -sign;
      i++;
    }
  while (str[i + 1] && str[i] >= '0' && str[i] <= '9')
    i++;
  while (i >= 0 && str[i] >= '0' && str[i] <= '9')
    {
      nb = nb + powten(str[i] - 48, compt);
      compt++;
      i--;
    }
  nb = nb * sign;
  return (nb);
}
