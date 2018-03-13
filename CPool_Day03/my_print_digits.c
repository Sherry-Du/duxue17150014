#include<unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_print_digits(void)
{
	char i = '0';
	while(i <= '9')
	{
		my_putchar(i);
		i++;
	}
	return 1;
}
