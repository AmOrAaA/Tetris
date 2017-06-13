/*
** my_map.c for  in /home/AmOrAA/Delivery/Tetris/PSU_2016_tetris/src
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Mon Feb 27 11:54:57 2017 Florian Testu
** Last update Sun Mar 19 17:58:19 2017 Florian Testu
*/

#include "tetris.h"

char	**take_my_tetrimino(char **tab, char **tetri)
{
  int	x;
  int	k;
  int	y;

  x = 0;
  while (tetri[++x] != NULL)
    {
      k = -1;
      while (tab[0][++k] != '\0');
      y = -1;
      k = (k / 2) - 2;
      while (tetri[x][++y] != '\0')
        {
          if (tetri[x][y] == '*')
            tab[x][++k] = tetri[x][y];
          else
            tab[x][++k] = ' ';
        }
    }
  return (tab);
}

char	*recup_nomber(char *str, char *ptr)
{
  int	i;
  int	j;

  i = -1;
  j = 0;
  while (str[++i] != '\0')
    {
      if (str[i] >= '0' && str[i] <= '9' || str[i] == ',')
	{
	  ptr[j] = str[i];
	  j = j + 1;
	}
    }
  ptr[j] = '\0';
  return (ptr);
}

void	print_1()
{
  start_color();
  init_pair(8, COLOR_WHITE, COLOR_WHITE);
  attron(COLOR_PAIR(8));
  mvprintw(LINES / 2, COLS / 2 , "  ");
  mvprintw(LINES / 2 + 1, COLS / 2 - 1, "  ");
  mvprintw(LINES / 2 + 1, COLS / 2, "  ");
  mvprintw(LINES / 2 + 2, COLS / 2, "  ");
  mvprintw(LINES / 2 + 2, COLS / 2 - 2, "  ");
  mvprintw(LINES / 2 + 3, COLS / 2, "  ");
  mvprintw(LINES / 2 + 4, COLS / 2, "  ");
  mvprintw(LINES / 2 + 5, COLS / 2, "  ");
  mvprintw(LINES / 2 + 6, COLS / 2, "  ");
}

int		take_number_map(char *str, char ***tetr)
{
  t_norm	norm;
  t_compt	compt;
  char		*ptr;
  int		mal;
  static time_t	start = 0;

  norm.ltr = my_strdup(str);
  norm.music = sfMusic_createFromFile("YTPMV_Tetris_Gabe_The_Dog_Remix_.ogg");
  begin_tetris();
  sfMusic_play(norm.music);
  start = time(NULL);
  mal = my_strlen(str);
  if ((ptr = malloc(sizeof(char) * mal + 3)) == NULL)
    exit(84);
  ptr = recup_nomber(norm.ltr, ptr);
  compt.haut = take_number1_map(ptr);
  norm.i = -1;
  while (ptr[++norm.i] != ',');
  compt.larg = take_number2_map(ptr, norm.i);
  norm.tab =  my_print_map(norm.tab, compt);
  my_algo(tetr, start, norm);
  return (0);
}
