##
## Makefile for tekdoom in /home/peau_c/Igraph/tekdoom
##
## Made by Poc
## Login   <peau_c@epitech.net>
##
## Started on  Mon Jan 18 14:44:16 2016 Clement Peau
## Last update Wed Feb 24 16:09:37 2016 Clement Thomas
##

SRC	= ./src/main.c

OBJ	= $(SRC:.c=.o)

NAME	= tetris

CC	= gcc -I./include

CFLAGS	= -W -Wall -Wextra -ansi -pedantic -Werror

$(NAME): $(OBJ)
	@ gcc $(OBJ) -o $(NAME) -lncurses
	@ echo -e "\033[1;32m \t \t \t ♩♪♫ TETRIS\033[0;32m®\033[1;32m Compiled Sucesfully ♩♪♫\033[0m "

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
