/*
** get_next_line.h for get_next_line in /home/Viper/CPE/CPE_2016_getnextline
** 
** Made by Boussé Mathieu
** Login   <Viper@epitech.net>
** 
** Started on  Thu Jan  5 16:50:13 2017 Boussé Mathieu
** Last update Mon Feb 27 15:26:29 2017 Boussé Mathieu
*/

#ifndef		GET_NEXT_LINE_H_
# define	GET_NEXT_LINE_H_

# ifndef READ_SIZE
#  define READ_SIZE (1)
# endif

#include <stdlib.h>
#include <unistd.h>

char	*get_next_line(const int);
void	my_putstr(char *);
void	my_putchar(char);

typedef struct	s_my_line
{
  char		*s;
  char		*buff;
  int		i;
  int		len;
}		t_my_line;

typedef struct	s_my_cat
{
  int		i;
  int		a;
  char		*str;
}		t_my_cat;

#endif
