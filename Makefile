##
## Makefile for tekdoom in /home/peau_c/Igraph/tekdoom
##
## Made by Poc
## Login   <peau_c@epitech.net>
##
## Started on  Mon Jan 18 14:44:16 2016 Clement Peau
## Last update Wed Feb 24 15:25:38 2016 Clement Peau
##

SRC	=

OBJ	= $(SRC:.c=.o)

NAME	= tekdoom

CFLAGS	= -W -Wall -Wextra -I./include -ansi -pedantic -Werror

$(NAME): $(OBJ)
	@ gcc $(OBJ) -o $(NAME)
	@ echo -e "\033[1;32m \t \t \n \t ♩♪♫ TETRIS\033[0;32m®\033[1;32m Compiled Sucesfully ♩♪♫\033[0m "

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
