##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## lib
##

SRC	=	add_first.c	\
		add_to_list.c	\
		create_list.c	\
		del_to_list.c	\
		destroy_list.c	\
		display_list.c

OBJ	=	$(SRC:.c=.o)

NAME 	=	libmy_doublechainedlists.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc  $(NAME) $(OBJ)
	cp $(NAME) ..

clean:
	rm -f $(OBJ)
	rm -f *~

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.Phony: all clean fclean re
