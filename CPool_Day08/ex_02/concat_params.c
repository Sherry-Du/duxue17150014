#include<stdlib.h>
int my_strlen(char const *str);

char *concat_params(int argc, char **argv)
{
	int len = 0;
	for(int k = 0; k < argc; k++)
		len = len + my_strlen(argv[k]);
	char *result = (char *)malloc(len + argc);
	char *pr = result;
	for(int i = 0; i < argc; i++)
	{
		char *p = argv[i];
		while(*p != '\0')
		{
			*pr = *p;
			pr ++; p ++;
		}
		if(i == argc - 1)
			*pr = '\0';
		else
		{
			*pr = '\n';
			pr ++;
		}
	}
	return result;
}


