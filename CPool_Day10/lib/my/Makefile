all:static_library
 
static_library:
	gcc -c *.c;
	ar -rc libmy.a *.o;
	cp -r *.a ../;
	cp -r *.h ../../include/;
 
clean:
	rm -rf *.o
	rm -rf *.a 
