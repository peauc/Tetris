##
## Makefile for make in /home/peau_c/#HIDDEN#
##
## Made by Poc
## Login   <peau_c@epitech.net>
##
## Started on  Mon Jan 18 14:44:16 2016 Clement Peau
## Last update Sat Mar 12 15:53:27 2016 Clement Peau
##


SRC	=	src/main.c					\
		src/error.c					\
		src/function_free.c				\
		src/option/fonction_pointer.c			\
		src/option/help_mode.c				\
		src/option/debug_mode.c				\
		src/option/options.c				\
		src/option/aff_tetri.c				\
		src/option/aff_keys.c				\
		src/option/initialize_keys.c			\
		src/option/two_word_option.c			\
		src/option/two_worded_options_fonctions.c	\
		src/option/two_worded_options_fonctions_next.c	\
		src/option/one_word_option.c			\
		src/option/one_worded_options_fonctions.c	\
		src/parsing/parsing.c				\
		src/parsing/add_info_to_list.c			\
		src/parsing/get_infos.c				\
		src/parsing/get_tetriminos.c			\
		src/parsing/get_lenght_of_file.c		\
		src/parsing/check_name.c			\
		src/parsing/get_name.c				\
		src/lib/my_strdup.c				\
		src/lib/my_strcpy.c				\
		src/lib/get_lenght_of_list.c			\
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
		src/aff_game.c					\
		src/next_tetriminos.c				\
		src/aff_next.c					\
		src/tab_game.c					\

SRCPRINTF=	src/printf/my_flagn.c				\
		src/printf/my_putnbrs.c				\
		src/printf/my_putspecial.c			\
		src/printf/put.c				\
		src/printf/printf.c				\
		src/printf/my_putnbrbase.c			\

OBJPRINTF=	$(SRCPRINTF:.c=.o)

OBJ	=	$(SRC:.c=.o)

NAME	= 	tetris

CC	= 	@ clang -F4 -g -I./inc

eCFLAGS	= 	-W  -Wall -Wextra -Werror

$(NAME): 	$(OBJ) $(OBJPRINTF)
		@ tput setaf 2
		@ echo "[OK] > Linking"
		@ echo "Making the printf library..."
		@ echo "[OK] > Done"
		@ ar rc libprintf.a $(OBJPRINTF)
		@ ranlib libprintf.a
		@ gcc $(OBJ) -o $(NAME) libprintf.a -lncurses
		@ echo -e "\033[1;32m \t \t \t ♩♪♫ TETRIS\033[0;32m®\033[1;32m Compiled Sucesfully ♩♪♫\033[0m "

all:		$(NAME)
		@#@ aplay .tetris.wav &


clean:
		@ tput setaf 2
		@ echo "[OK] > Deleting .o"
		@ rm -f $(OBJ)
		@ rm -f $(OBJPRINTF)
		@ tput setaf 7

fclean:		clean
		@ tput setaf 2
		@ echo "[OK] > Deleting binaries"
		@ rm -f $(NAME)
		@ rm -f libprintf.a
		@ tput setaf 7OA

re:		fclean all

.c.o:
		@ $(CC) -c $< -o $@
		@ tput setaf 2
		@ echo -e "[OK] > $<\t\t"
		@ tput setaf 7
