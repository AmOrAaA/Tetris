/*
** main.c for main in /home/Viper/PSU/bork/src
** 
** Made by Boussé Mathieu
** Login   <Viper@epitech.net>
** 
** Started on  Wed Mar  1 13:51:43 2017 Boussé Mathieu
** Last update Sun Mar 19 18:10:31 2017 Florian Testu
*/

#include "tetris.h"

char	***my_print_tetr(char **path, int fd, char *str, int i)
{
  int	c;
  char	***tetr;
  int	bal;

  bal = i;
  tetr = xxxxmalloc(sizeof(char **) * 21, tetr);
  i = 0;
  while (path[i])
    {
      c = 0;
      str = xmalloc(my_strlen(path[i]) + 1, str);
      path = my_get_alphabetical(path);
      while (path[i][c] != '.')
	{
	  str[c] = path[i][c];
	  c++;
	}
      str[c] = '\0';
      fd = open(my_nstrcat("tetriminos/", path[i]), O_RDONLY);
      tetr[i] = check_tetrimino(fd, str, bal);
      close(fd);
      i++;
    }
  tetr[i] = NULL;
  return (tetr);
}

int	main(int ac, char **av)
{
  t_key	key;
  int	i;
  char	***tetr;

  if (ac == 2 && (my_strcmp(av[1], "--help") == 0))
    my_display_help(av);
  else
    {
      key = my_define_key(key, ac, av);
      i = 0;
      tetr = get_tetr_flags(key, ac, av, i);
      take_number_map(key.size, tetr);
    }
  return (0);
}
