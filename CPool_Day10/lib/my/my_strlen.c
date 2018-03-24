#include<unistd.h>
int my_strlen(char const *str)
{
	const char *sc = str;
	for(; *sc != '\0'; ++sc);
	return sc - str ;
}
