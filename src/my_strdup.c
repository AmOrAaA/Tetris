/*
** my_strdup.c for my_strdup in /home/Viper/CPool_Day08/task01
** 
** Made by Boussé Mathieu
** Login   <Viper@epitech.net>
** 
** Started on  Wed Oct 12 13:51:08 2016 Boussé Mathieu
** Last update Tue Feb 28 17:38:28 2017 Boussé Mathieu
*/

#include "tetris.h"

char	*my_strdup(char *src)
{
  char	*str;
  int	i;

  i = 0;
  if ((str = malloc((my_strlen(src) + 1))) == NULL)
    return (NULL);
  while (src[i])
    {
      str[i] = src[i];
      i++;
    }
  str[i] = '\0';
  return (str);
}
