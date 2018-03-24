int my_putstr(char const *str);

void my_putchar(char c);

int my_show_word_array(char *const *tab) 
{
	while(*tab != 0)
	{
		my_putstr(*tab);
		my_putchar('\n');
		tab ++;
	}
	return 1;
}


