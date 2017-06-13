/*
** tetris.h for tetris in /home/Viper/PSU/bork/inc
** 
** Made by Boussé Mathieu
** Login   <Viper@epitech.net>
** 
** Started on  Thu Mar  2 10:52:24 2017 Boussé Mathieu
** Last update Sun Mar 19 19:44:31 2017 Florian Testu
*/

#ifndef		TETRIS_H_
# define	TETRIS_H_
# define	_GNU_SOURCE

# include <time.h>
# include <termios.h>
# include <string.h>
# include <ncurses.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdarg.h>
# include <unistd.h>
# include <dirent.h>
# include <sys/ioctl.h>
# include <stropts.h>
# include "get_next_line.h"

typedef struct  s_norm
{
  char          **tab;
  int           i;
  char          *ltr;
  char          *get;
}               t_norm;

typedef struct  s_map
{
  int           x;
  int           y;
  int           compt;
}               t_map;

typedef struct	s_key
{
  char		*left;
  char		*right;
  char		*turn;
  char		*drop;
  char		*quit;
  char		*pause;
  char		*next;
  char		*level;
  char		*size;
}		t_key;

typedef struct	s_check
{
  char		**tetr;
  char		**car;
  char		*buff;
  int		i;
}		t_check;

typedef struct	s_compt
{
  int		haut;
  int		larg;
}		t_compt;

typedef struct	s_tetr
{
  int		c;
  int		fd;
  char		*str;
  char		**path;
  char		***tetr;
}		t_tetr;

void	end_game(char ***, int, char **);
char	**mov_left(char **, char *);
char	**mov_right(char **, char *);
char	**mov_down(char **, char *);
char	**chut_tetri(char **, int *);
int	check_lol(int, int);
char	**mov2(char **tab, char *, int);
int	check2mov_down(char **tab, int);
char	**mov1(char **, char *);
char	**check_down_line(char **, int *);
int	check_mov_down(char **);
char	**take_my_tetrimino(char **, char **);
char	**chang_tab(char **);
int	end_tab(char **);
char	**cond_mouv_right(char **, int, int);
char	**mov_left(char **, char *);
char	**mov_right(char **, char *);
char	**mov_down(char **, char *);
void	my_algo(t_norm, char ***, time_t);
void	init_ncurse();
char	**window(char **);
char	**chut_tetri(char **, int *);
char	**check_my_map(char **, int, int, t_compt);
char	**check_my_map_tetrimino(char **, int, int);
char	**check_my_map_score(char **, int, int);
char	**my_str_to_wordtab(char *);
int	take_number1_map(char *);
int	take_number2_map(char *, int);
char	**my_print_map(char **, t_compt);
int	take_number_map(char *, char ***);
char	*recup_nomber(char *, char *);
int	strcolon(char **);
int	strline(char **);
int	my_getnbr(char *);
int	close_window(int);
int	my_map_tetrimino();
int	my_map_score();
void    print_t();
void    print_t2();
void    print_r();
void    print_i();
void    print_s();
char	**check_tetrimino(int, char *, int);
void	my_print_double_str(char **);
int	my_strlen(char *);
char	*my_strcat(char *, char *);
char	**get_tetriminos(char **);
int	my_printf(char *, ...);
void	my_start_print_double_str(char **, int);
char	*my_strcpy(char *, char *);
char	*my_nstrcat(char *, char *);
int	my_strcmp(char *, char *);
void	my_display_help(char **);
char	*xmalloc(int, char *);
char	**xxmalloc(int, char **);
char	***xxxxmalloc(int, char ***);
char	**my_get_alphabetical(char **);
char	*my_strcpy(char *, char *);
void	my_print_comm(t_key);
t_key	my_define_key(t_key, int, char **);
char	*my_strdup(char *);
char	***get_tetr_flags(t_key, int, char **, int);
char	***my_print_tetr(char **, int, char *, int);
t_key	my_modif_key_4(t_key, int, char **, int);
int	my_fake_tetrimino(char **, char *, int);
void	waiting_for_input();
char	*convert_keyboard(char *);
void	my_modif_compt_map(time_t, int *, int *, int *);
void	my_modif_compt_map2(char ***, int);
int	destroy_line(char **);
int	end_of_game(char **);
char	**comptatetr(char **);
char	*my_getch();
char	*my_nstrcpy(char *, char *);
int	my_ngetnbr(char *);
int	check_fake_tetri(char **, int *);
void	eco_check(char *, t_check);
void	my_aff_unprintable(char *);

#endif
