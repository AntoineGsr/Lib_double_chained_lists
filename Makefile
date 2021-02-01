##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## lib
##

SRC	=	main.c

OBJ	=	$(SRC:.c=.o)

NAME 	=	my_lib

CFLAGS	=	-I./include/ -I. -g

LDFLAGS =	-L./lib_dchain/ -lmy_doublechainedlists

all:	$(NAME)

$(NAME):	$(OBJ) lib_dchain/libmy_doublechainedlists.a
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	$(RM) ./lib_dchain/my/*~
	$(RM) *~
	$(RM) $(OBJ)
	$(MAKE) -C ./lib_dchain/my/ clean

fclean:	clean
	$(RM) $(NAME)
	$(RM) ./lib_dchain/libmy_doublechainedlists.a
	$(MAKE) -C ./lib_dchain/my/ fclean

re:	fclean all
	$(MAKE) -C ./lib_dchain/my/ re

lib_dchain/libmy_doublechainedlists.a:
	$(MAKE) -C ./lib_dchain/my/

.Phony: all clean fclean re
	$(MAKE) -C ./lib_dchain/my/ .Phony