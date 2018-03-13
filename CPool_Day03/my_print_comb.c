#include<unistd.h>
void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_print_comb(void)
{
	for(char i = '0'; i <= '9'; i++)
	{
		for(char j = i+1; j <= '9'; j++)
		{
			for(char k = j+1; k <= '9';k++)
			{
				my_putchar(i);
				my_putchar(j);
				my_putchar(k);
				my_putchar(',');
			}
		}
	}
}
