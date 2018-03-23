#include<stdlib.h>
int my_strlen(char const *str);

int my_is_alphanumeric(char c)
{
	
	if((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return 1;
	else 
		return 0;
}

char **my_str_to_word_array(char const *str)
{
	int len = my_strlen(str);
	char **result;
	result = malloc(sizeof(char *) * (len + 1));
	result[0] = malloc(len + 1);
	int i = 0, j = 0, s = 0, flag = 0;
	while(str[s])
	{
		if(my_is_alphanumeric(str[s]))
		{	
			flag = 1;
			result[i][j] = str[s];
			j ++;
		}
		else
		{
			if(flag == 1)
			{
				result[i + 1] = malloc(len + 1);
				i ++; j = 0; flag = 0;
			}
		}
		s ++;
	}
	return result;
}
