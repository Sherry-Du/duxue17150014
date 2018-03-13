#include<unistd.h>

int my_print_alpha(void)
{
	char ch = 'a';
	while(ch <= 'z')
	{
		write(1, &ch, 1);
		ch = ch + 1;
	}
	return 1;
}
