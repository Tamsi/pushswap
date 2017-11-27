##
## EPITECH PROJECT, 2017
## makefile
## File description:
## compiler
##

SRC	=   	main.c			\
		lib/my_getnbr.c		\
		lib/my_strlen.c		\
		lib/my_delete_nodes.c	\
		lib/my_putstr.c		\
		lib/my_params_to_list.c	\
		lib/my_rev_list.c	\
		lib/push_in_list.c	\
		lib/my_swap_functions.c	\

NAME	=	push_swap

CFLAGS	=	-Wall -Wextra

LFLAGS	=	-I./include


$(NAME):
		gcc $(SRC) -o $(NAME) $(CFLAGS) $(LFLAGS)


all:            $(NAME)

clean:
		rm -rf $(OBJ)

fclean:		clean
		rm -rf $(NAME)

re:		fclean all

.PHONY: all clean fclean re
