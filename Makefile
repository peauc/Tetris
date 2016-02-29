##
## Makefile for tekdoom in /home/peau_c/Igraph/tekdoom
##
## Made by Poc
## Login   <peau_c@epitech.net>
##
## Started on  Mon Jan 18 14:44:16 2016 Clement Peau
## Last update Mon Feb 29 20:34:58 2016 Clement Peau
##

SRC	=	src/main.c		\
		src/parsing.c		\
		src/lib/my_strlen.c	\
		src/lib/my_strcat.c	\

OBJ	=	 $(SRC:.c=.o)

NAME	= 	tetris

CC	= 	gcc -I./inc

CFLAGS	= 	-W -Wall -Wextra  # -Werror

$(NAME): 	$(OBJ)
		@ gcc $(OBJ) -o $(NAME) -lncurses
		@ echo -e "\033[1;32m \t \t \t ♩♪♫ TETRIS\033[0;32m®\033[1;32m Compiled Sucesfully ♩♪♫\033[0m "

all:		$(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
