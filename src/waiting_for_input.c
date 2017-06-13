/*
** waiting_for_input.c for waiting for input in /home/Viper/PSU/bork/src
** 
** Made by Boussé Mathieu
** Login   <Viper@epitech.net>
** 
** Started on  Tue Mar  7 12:38:17 2017 Boussé Mathieu
** Last update Sun Mar 19 17:59:28 2017 Boussé Mathieu
*/

#include "tetris.h"

char	*convert_keyboard(char *kcu)
{
  char	*res;
  int	i;

  i = 0;
  if ((res = malloc(10)) == NULL)
    exit(84);
  initscr();
  keypad(stdscr, TRUE);
  res = tigetstr(kcu);
  return (res);
}

void			waiting_for_input()
{
  struct termios	Tern;
  struct termios	Tero;
  char			*buff;
  int			res;
  char			*testy;

  Tern = Tero;
  Tern.c_lflag &= ~ECHO;
  Tern.c_lflag &= ~ICANON;
  if ((buff = malloc(11)) == NULL)
    exit;
  ioctl(0, TCSETS, &Tern);
  while (read(0, buff, 10) < 1);
  ioctl(0, TCSETS, &Tero);
}

char	*my_cmp_input(char *capname)
{
  char	*new_cap;

  new_cap = xmalloc(10, new_cap);
  new_cap = my_strcpy(new_cap, capname);
  if (my_strcmp(new_cap, tigetstr("kcuu1")) == 0)
    return ("UA");
  else if (my_strcmp(new_cap, tigetstr("kcud1")) == 0)
    return ("DA");
  else if (my_strcmp(new_cap, tigetstr("kcuf1")) == 0)
    return ("RA");
  else if (my_strcmp(new_cap, tigetstr("kcub1")) == 0)
    return ("LA");
  else
    return (capname);
}

char			*my_getch()
{
  struct termios	tern;
  struct termios	tero;
  int			res;
  char			*tiget;
  char			*cap_name;

  tern = tero;
  tern.c_lflag &= ~ECHO;
  tern.c_lflag &= ~ICANON;
  if ((cap_name = malloc(11)) == NULL)
    return (NULL);
  ioctl(0, TCGETS, &tero);
  ioctl(0, TCSETS, &tern);
  read(0, cap_name, 10);
  tiget = my_cmp_input(cap_name);
  ioctl(0, TCSETS, &tero);
  return (tiget);
}
