#include<stdio.h>
int my_str_isnum(char const *str);

int my_str_isalpha(char const *str);

char **my_str_to_word_array(char const *str)
{
	int count = 1;
	while(*str)
	{
		if(my_str_isnum(*str) == 0 && my_str_isalpha(*str) == 0)
			count ++;
	}
	char **result = (char *)malloc(count + 1);
	char **p = result;
	int i = 0;
	while(*str && **p)
	{
		char *wp = *p[i];
		if(my_str_isnum(*str) == 0 && my_str_isalpha(*str) == 0)
			p ++;
	}
}
