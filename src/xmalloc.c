/*
** xmalloc.c for xmalloc in /home/Viper/PSU/PSU_2016_minishell1/src
** 
** Made by Boussé Mathieu
** Login   <Viper@epitech.net>
** 
** Started on  Thu Jan 19 09:04:47 2017 Boussé Mathieu
** Last update Sun Mar 19 18:10:19 2017 Florian Testu
*/

#include "tetris.h"

char	*xmalloc(int size, char *str)
{
  if ((str = malloc(size)) == NULL)
    return (NULL);
  return (str);
}

char	**xxmalloc(int size, char **str)
{
  if ((str = malloc(size)) == NULL)
    return (NULL);
  return (str);
}

int	*xxxmalloc(int size, int *tab)
{
  if ((tab = malloc(size)) == NULL)
    return (NULL);
  return (tab);
}

char	***xxxxmalloc(int size, char ***tab)
{
  if ((tab = malloc(size)) == NULL)
    return (NULL);
  return (tab);
}
