/*
** my_print_comm.c for my_print_com.c in /home/Viper/PSU/bork/src
** 
** Made by Boussé Mathieu
** Login   <Viper@epitech.net>
** 
** Started on  Tue Feb 28 16:21:52 2017 Boussé Mathieu
** Last update Sun Mar 19 18:00:48 2017 Florian Testu
*/

#include "tetris.h"

t_key	my_modif_key_3(t_key key, int ac, char **av, int i)
{
  if (av[i][2] == 'l' && av[i][3] == 'e' && av[i][4] == 'v' && av[i][5] == 'e')
    {
      key.level[0] = av[i][9];
      key.level[1] = '\0';
    }
  if (av[i][2] == 'k' && av[i][3] == 'e' && av[i][4] == 'y' && av[i][5] == '-')
    {
      if (av[i][6] == 'l' && av[i][7] == 'e' && av[i][8] == 'f')
	{
	  key.left[0] = av[i][9];
	  key.left[1] = '\0';
	}
      if (av[i][6] == 'r' && av[i][7] == 'i' && av[i][8] == 'g')
	{
	  key.right[0] = av[i][9];
	  key.right[1] = '\0';
	}
      if (av[i][6] == 't' && av[i][7] == 'u' && av[i][8] == 'r')
	{
	  key.turn[0] = av[i][9];
	  key.turn[1] = '\0';
	}
    }
  return (key);
}

t_key	my_modif_key_2(t_key key, int ac, char **av, int i)
{
  while (i < ac)
    {
      if (my_strlen(av[i]) > 3 && av[i][0] == '-' && av[i][1] == '-')
	{
	  key = my_modif_key_3(key, ac, av, i);
	  key = my_modif_key_4(key, ac, av, i);
	  if (av[i][2] == 'w' && av[i][3] == 'i' && av[i][4] == 't' &&
	      av[i][10] == 'n' && av[i][11] == 'e' && av[i][12] == 'x')
	    key.next = my_strdup("yes");
	  if (av[i][2] == 'm' && av[i][3] == 'a' && av[i][4] == 'p' &&
	      av[i][5] == 's' && av[i][6] == 'i' && av[i][7] == 'z')
	    key.size = av[i];
	}
      i++;
    }
  return (key);
}

t_key	my_modif_key(t_key key, int ac, char **av, int i)
{
  while (i < ac)
    {
      if (my_strcmp(av[i], "-l") == 0)
	key.level = av[i + 1];
      if (my_strcmp(av[i], "-kl") == 0)
	key.left = av[i + 1];
      if (my_strcmp(av[i], "-kr") == 0)
	key.right = av[i + 1];
      if (my_strcmp(av[i], "-kt") == 0)
	key.turn = av[i + 1];
      if (my_strcmp(av[i], "-kd") == 0)
	key.drop = av[i + 1];
      if (my_strcmp(av[i], "-kq") == 0)
	key.quit = av[i + 1];
      if (my_strcmp(av[i], "-kp") == 0)
	key.pause = av[i + 1];
      if (my_strcmp(av[i], "-w") == 0)
	key.next = my_strdup("yes");
      i++;
    }
  i = 0;
  key = my_modif_key_2(key, ac, av, i);
  return (key);
}

t_key	my_define_key(t_key key, int ac, char **av)
{
  int	i;

  i = 0;
  key.left = my_strdup(convert_keyboard("kcub1"));
  key.right = my_strdup(convert_keyboard("kcuf1"));
  key.turn = my_strdup(convert_keyboard("kcuu1"));
  key.drop = my_strdup(convert_keyboard("kcud1"));
  key.quit = my_strdup("q");
  key.pause = my_strdup("(space)");
  key.next = my_strdup("no");
  key.level = my_strdup("1");
  key.size = my_strdup("--map-size={20,20}");
  key = my_modif_key(key, ac, av, i);
  endwin();
  return (key);
}

void	my_print_comm(t_key key)
{
  my_putstr("Key Left : ");
  my_aff_unprintable(key.left);
  my_putstr("Key Right : ");
  my_aff_unprintable(key.right);
  my_putstr("Key Turn : ");
  my_aff_unprintable(key.turn);
  my_putstr("Key Drop : ");
  my_aff_unprintable(key.drop);
  my_printf("Key Quit : %s\n", key.quit);
  my_printf("Key Pause : %s\n", key.pause);
  my_printf("Next : %s\n", key.next);
  my_printf("Level : %s\n", key.level);
  my_printf("Size : %c%c*%c%c\n", key.size[12], key.size[13],
	    key.size[15], key.size[16]);
}
