SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME 	=	./lib/my/libmy.a

all:	$(NAME)
 
$(NAME):
	gcc -o $(NAME) $(OBJ) -L./lib -lmy
	
clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re:	fclean all