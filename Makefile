##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

SRC	=	bsq.c	\
		my_putstr.c	\
		my_putchar.c	\
		startnbr.c	\
		compte.c	\
		end.c

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -g

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:     fclean all

.PHONY: clean fclean re all

