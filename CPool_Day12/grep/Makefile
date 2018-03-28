SRC	=	grep.c

OBJ	=	$(SRC:.c=.o)

NAME 	=	grep

all:	$(NAME)
 
$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -L../lib/my -lmy
	
clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re:	fclean all