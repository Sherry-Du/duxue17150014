#include<unistd.h>
void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_print_comb2(void)
{
	char a, b, i, j;
	char s = ' ';
	char h = ',';
	for(a = '0'; a <= '9'; a++)
	{
		for(b = a; b <= '9'; b++)
		{
			for(i = a; i <= '9'; i++)
			{
				for(j = b+1; j <= '9'; j++)
				{
					my_putchar(a);
					my_putchar(b);
					my_putchar(s);
					my_putchar(i);
					my_putchar(j);
					my_putchar(h);
				}
			}
		}
	}
}

