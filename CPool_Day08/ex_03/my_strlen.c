#include<unistd.h>
int my_strlen(char const *str)
{
	char const *sc = str;
	for(; *sc != '\0'; ++sc);
	return sc - str ;
}