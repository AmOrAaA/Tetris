/*
** my_get_alphabetical.c for my_get_alphabetical in /home/Viper/PSU/bork/src
** 
** Made by Boussé Mathieu
** Login   <Viper@epitech.net>
** 
** Started on  Tue Feb 28 11:36:31 2017 Boussé Mathieu
** Last update Sun Mar 19 17:56:14 2017 Florian Testu
*/

#include "tetris.h"

int	my_get_max_lenght(char **path)
{
  int	len;
  int	i;

  i = 0;
  len = 0;
  while (path[i])
    {
      if (my_strlen(path[i]) > len)
	len = my_strlen(path[i]);
      i++;
    }
  return (len + 1);
}

int	check_my_end(char **path)
{
  int	i;

  i = 0;
  while (path[i])
    i++;
  i--;
  while (i >= 1)
    {
      if (path[i][0] < path[i - 1][0])
	return (0);
      i--;
    }
  return (1);
}

char	**my_get_alphabetical(char **path)
{
  char	*memory;
  int	i;

  i = 0;
  memory = xmalloc(my_get_max_lenght(path), memory);
  while (check_my_end(path) == 0)
    {
      if (path[i] == NULL)
	i = 0;
      if (path[i + 1] != NULL && path[i][0] > path[i + 1][0])
	{
	  memory = my_nstrcpy(memory, path[i]);
	  path[i] = my_nstrcpy(path[i], path[i + 1]);
	  path[i + 1] = my_nstrcpy(path[i + 1], memory);
	}
      i++;
    }
  return (path);
}
