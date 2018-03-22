#include<stdlib.h>

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src);

char *my_strdup(char const *src)
{
	int len = my_strlen(src);
	char *result = (char *)malloc(len + 1);
	my_strcpy(result, src);
	return result;
}
