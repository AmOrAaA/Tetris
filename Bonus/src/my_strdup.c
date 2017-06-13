/*
** my_strdup.c for my_strdup in /home/Viper/CPool_Day08/task01
** 
** Made by Boussé Mathieu
** Login   <Viper@epitech.net>
** 
** Started on  Wed Oct 12 13:51:08 2016 Boussé Mathieu
** Last update Sun Mar 19 18:02:33 2017 Florian Testu
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
