#include<unistd.h>
#include<stdlib.h>
int my_strlen(char const *str);
char *my_evil_str(char *str)
{
	int len = my_strlen(str);
	char *restr = (char *)malloc(len+1);
	char *a = &str[len-1];
	char *b = restr;
	while(len != 0)
	{
		*b++ = *a--;
		len--;
	}
	return restr;
}