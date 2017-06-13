/*
** get_next_line.c for get_next_line.c in /home/Viper/CPE/CPE_2016_getnextline
** 
** Made by Boussé Mathieu
** Login   <Viper@epitech.net>
** 
** Started on  Thu Jan  5 16:53:24 2017 Boussé Mathieu
** Last update Fri Mar 17 16:27:16 2017 Boussé Mathieu
*/

#include "get_next_line.h"

int	my_xstr(char **str, int size)
{
  int	i;

  i = 0;
  if (size != 0)
    {
      if (((*str) = malloc(size)) == NULL)
	return (-1);
    }
  else
    {
      while ((*str)[i] != '\0')
	i++;
    }
  return (i);
}

char		*my_nstrcat(char *dest, char *src)
{
  t_my_cat	cat;

  if (dest == NULL)
    return (src);
  my_xstr(&cat.str, sizeof(char) *
	  (my_xstr(&dest, 0) + my_xstr(&src, 0) + 1));
  if (src != NULL)
    {
      cat.a = 0;
      cat.i = 0;
      while (dest[cat.i])
	{
	  cat.str[cat.i] = dest[cat.i];
	  cat.i++;
	}
      cat.str[cat.i] = src[0];
      while (src[cat.a] != '\0')
	{
	  cat.str[cat.i] = src[cat.a];
	  cat.i++;
	  cat.a++;
	}
      cat.str[cat.i] = '\0';
    }
  return (cat.str);
}

int	detectjump(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] == '\n' || str[i] == '\0')
	return (1);
      i++;
    }
  return (0);
}

char	*conserv_str(t_my_line *line, char *str)
{
  int	c;
  int	a;

  c = 0;
  a = 0;
  str = NULL;
  if (line->len != 0)
    {
      my_xstr(&str, sizeof(char) * READ_SIZE + 1);
      while (line->s[a] != '\n' && line->s[a] != '\0')
	a++;
      a++;
      while (line->s[a] && c < READ_SIZE + 1)
	{
	  str[c] = line->s[a];
	  c++;
	  a++;
	}
      str[c] = '\0';
    }
  a = 0;
  while (line->s[a] != '\n' && line->s[a] != '\0')
    a++;
  line->s[a] = '\0';
  return (str);
}

char		*get_next_line(const int fd)
{
  static char	*str = NULL;
  t_my_line	line;

  line.len = 1;
  line.i = 0;
  if (fd == -1 ||
      my_xstr(&line.s, 1) == -1 || my_xstr(&line.buff, READ_SIZE + 1))
    return (NULL);
  line.s[0] = '\0';
  while (detectjump(line.s) == 0 && line.len != 0)
    {
      if (my_xstr(&line.buff, READ_SIZE + 1) == -1)
	return (NULL);
      line.len = read(fd, line.buff, READ_SIZE);
      line.buff[READ_SIZE] = '\0';
      line.s = my_nstrcat(line.s, line.buff);
    }
  if (line.len == 0 && line.s[0] == '\0' && (str == NULL || str[0] == '\0'))
    return (NULL);
  line.s = my_nstrcat(str, line.s);
  str = conserv_str(&line, str);
  return (line.s);
}
