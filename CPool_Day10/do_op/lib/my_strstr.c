//#include<stdio.h>
char *my_strstr(char *str, char const *to_find)
{
	while(*str)
	{
		for(int n = 0; *(str + n) == *(to_find + n); n++)
		{
			if(!*(to_find + n + 1))
				return (char*)str;
		}
		str ++;
	}
	//return NULL;
}
