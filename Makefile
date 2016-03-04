##
## Makefile for make in /home/peau_c/#HIDDEN#
##
## Made by Poc
## Login   <peau_c@epitech.net>
##
## Started on  Mon Jan 18 14:44:16 2016 Clement Peau
## Last update Fri Mar  4 13:21:18 2016 Clement Peau
##

SRC	=	src/main.c					\
		src/error.c					\
		src/option/debug_mode.c				\
		src/option/options.c				\
		src/option/aff_tetri.c				\
		src/parsing/parsing.c				\
		src/parsing/add_info_to_list.c			\
		src/parsing/get_infos.c				\
		src/parsing/get_tetriminos.c			\
		src/parsing/get_lenght_of_file.c		\
		src/parsing/check_name.c			\
		src/parsing/get_name.c				\
		src/lib/show_list.c				\
		src/lib/my_strcmp.c				\
		src/lib/show_tab.c				\
		src/lib/my_getnbr.c				\
		src/lib/get_next_line.c				\
		src/lib/my_strlen.c				\
		src/lib/my_strcat.c				\
		src/linked_list/add_in_alphanumerical_order.c	\
		src/linked_list/create.c			\
		src/aff.c					\
		src/aff_game.c


OBJ	=	 $(SRC:.c=.o)

NAME	= 	tetris

CC	= 	clang -F4 -g -I./inc

CFLAGS	= 	-W  -Wall -Wextra  # -Werror

$(NAME): 	$(OBJ)
		@ gcc $(OBJ) -o $(NAME) -lncurses
		@ echo -e "\033[1;32m \t \t \t ♩♪♫ TETRIS\033[0;32m®\033[1;32m Compiled Sucesfully ♩♪♫\033[0m "
		#@ aplay .tetris.wav &

all:		$(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.c.o:
		@ $(CC) -c $< -o $@
		@ tput setaf 5
		@ echo -e "[OK] > $<\t\t"
		@ tput setaf 7
