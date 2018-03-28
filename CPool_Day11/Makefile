
all:static_library
 
static_library:
	gcc -c ./lib/my/*.c;
	ar rc libmy.a *.o;
 
clean:
	rm -rf *.o
	

fclean: clean
	rm -rf *.a

re:	fclean all