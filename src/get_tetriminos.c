/*
** get_tetriminos.c for get_tetriminos in /home/Viper/PSU/PSU_2016_bstetris/src
** 
** Made by Boussé Mathieu
** Login   <Viper@epitech.net>
** 
** Started on  Tue Feb 21 10:40:32 2017 Boussé Mathieu
** Last update Sun Mar 19 17:44:07 2017 Boussé Mathieu
*/

#include "tetris.h"

char	*my_strcpy2(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}

char	**get_tetriminos(char **path)
{
  struct dirent	*dire;
  DIR		*rep;
  int		i;

  i = 0;
  path = malloc(sizeof(char *) * 50);
  if ((rep = opendir("tetriminos")) == NULL)
    exit (84);
  while ((dire = readdir(rep)) != NULL)
    {
      if (dire->d_name[0] != '.')
	{
	  path[i] = xmalloc(my_strlen(dire->d_name) + 1, path[i]);
	  path[i] = my_strcpy2(path[i], dire->d_name);
	  i++;
	}
    }
  path[i] = NULL;
  return (path);
}
