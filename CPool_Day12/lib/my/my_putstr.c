#include<unistd.h>

int my_strlen(char const *s);
int my_putstr(char const *str) 
{
	write(1, str, my_strlen(str));
	return 0;
}
