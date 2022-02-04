##
## EPITECH PROJECT, 2021
## B-CPE-110-STG-1-1-pushswap-yanis.ktab
## File description:
## Makefile
##

SRC	=	main.c	\
		my_putstr.c	\
		my_strlen.c	\
		my_putchar.c

OBJ =    $(SRC:.c=.o)

NAME =	frenchNameFormatter

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -g -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re: fclean all
