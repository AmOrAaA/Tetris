##
## Makefile for Makefile in /home/Viper/PSU/bork
## 
## Made by Boussé Mathieu
## Login   <Viper@epitech.net>
## 
## Started on  Thu Mar  2 16:05:31 2017 Boussé Mathieu
## Last update Sun Mar 19 16:59:09 2017 Florian Testu
##

CC	=	gcc

RM	=	rm -f

NAME	=	tetris

CFLAGS	+=	-I./inc

SRCS	=	src/main.c			\
		src/check_tetrimino.c		\
		src/get_next_line.c		\
		src/get_tetriminos.c		\
		src/my_print_double_str.c	\
		src/xmalloc.c			\
		src/my_display_help.c		\
		src/my_map.c			\
		src/my_print_tetris.c		\
		src/fonc_map.c			\
		src/my_get_alphabetical.c	\
		src/my_print_comm.c		\
		src/my_strdup.c			\
		src/get_tetr_flags.c		\
		src/annex_comm.c		\
		src/creat_all_map.c		\
		src/creat_exit_window.c		\
		src/my_check_all_map.c		\
		src/my_str_to_wordtab.c		\
		src/waiting_for_input.c		\
		src/my_modif_info_tab.c		\
		src/chut_tetri.c		\
		src/annex_for_compa.c		\
		src/mouv.c                      \
                src/fonc_mouv.c                 \
                src/my_algo.c			\
		src/my_newfonc.c		\
		src/my_aff_unprintable.c	\
		src/fonc_loose.c		\
		src/print_my_loose.c		\
		src/print_tetris.c		\
		src/mouv2.c			\
		src/my_modif_info_tab2.c	\
		src/my_map2.c			\
		src/my_algo2.c			

OBJS	=	$(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(OBJS) -o $(NAME) -lncurses -L. -lmy -lc_graph_prog

clean:
	$(RM) $(OBJS)
	find -name "*~" -delete , -name "#*#" -delete

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
