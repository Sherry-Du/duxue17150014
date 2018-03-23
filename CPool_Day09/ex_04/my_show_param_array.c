char **my_str_to_word_array(char const *str);
int my_putstr(char const *str);
void my_putchar(char c);
int my_show_word_array(char *const *tab);

int my_show_param_array(struct info_param const *par)
{
	int i = 0, len;
	char *params, **words;
	while(par[i].str != 0)
	{
		params = par[i].str;
		my_putstr(params);
		my_putchar('\n');
		len = par[i].length;
		my_putchar(len + '0');
		my_putchar('\n');
		words = par[i].word_array;
		my_show_word_array(words);
		i++;
	}
	return 1;
}
