/*
** get_tetr_flags.c for get_tetr_flags.c in /home/Viper/PSU/bork/src
** 
** Made by Boussé Mathieu
** Login   <Viper@epitech.net>
** 
** Started on  Tue Feb 28 19:20:05 2017 Boussé Mathieu
** Last update Sun Mar 19 17:11:18 2017 Florian Testu
*/

#include "tetris.h"

void	my_print_nb(char **path)
{
  int	i;

  i = 0;
  while (path[i])
    i++;
  my_printf("Tetriminos : %d\n", i);
}

void	eco_get()
{
  my_putstr("Press any key to start Tetris");
  waiting_for_input();
  my_putchar('\n');
}

void	eco_check(char *str, t_check check)
{
  my_printf("Tetriminos : Name %s : Size %s*%s : Color %s :\n",
	    str, check.car[0], check.car[1], check.car[2]);
  my_start_print_double_str(check.tetr, 1);
}

char		***get_tetr_flags(t_key key, int ac, char **av, int i)
{
  t_tetr	fl;

  i = i;
  fl.c = 0;
  while (fl.c < ac)
    {
      if (ac > 1 && ((my_strcmp(av[1], "--debug") == 0) ||
		     (my_strcmp(av[1], "-d") == 0)))
	{
	  fl.path = get_tetriminos(fl.path);
	  my_putstr("*** DEBUG MODE ***\n");
	  my_print_comm(key);
	  my_print_nb(fl.path);
	  fl.tetr = my_print_tetr(fl.path, fl.fd, fl.str, 1);
	  eco_get();
	  fl.c = 100;
	}
      else
	{
	  fl.path = get_tetriminos(fl.path);
	  fl.tetr = my_print_tetr(fl.path, fl.fd, fl.str, 0);
	}
      fl.c++;
    }
  return (fl.tetr);
}
