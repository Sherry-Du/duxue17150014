#include<stdlib.h>

int my_show_word_array(char *const *tab);
char **my_str_to_word_array(char const *str);
int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);

struct info_param *my_params_to_array(int ac , char **av)
{
	struct info_param *param = malloc(sizeof(struct info_param) * (ac + 1));
	int i;
	for(i = 0; i < ac; i++)
	{
		char *p = av[i];
		
		int len = my_strlen(p);
		param[i].length = len;
		param[i].str = av[i];
		char *dest = (char *)malloc(len + 1);
		my_strcpy(dest, p);
		param[i].copy = dest;
		param[i].word_array = my_str_to_word_array(p);
	}
	param[i].str = 0;
	return param;
}