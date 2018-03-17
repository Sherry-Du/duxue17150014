#include<unistd.h>
int my_putchar(char c);

int colle_first(int x)
{
	my_putchar('A');
	for(int i = 1; i <= x-2; i++)
		my_putchar('B');
	my_putchar('A');
	my_putchar('\n');
	return 1;
}

int colle_last(int x)
{
	my_putchar('C');
	for(int i = 1; i <= x-2; i++)
		my_putchar('B');
	my_putchar('C');
	my_putchar('\n');
	return 1;
}

int colle_mid(int x, int y)
{
	for(int i = 1;i <= y-2; i++)
	{
		my_putchar('B');
		for(int j = 1; j <= x-2; j++)
			my_putchar(' ');
		my_putchar('B');
		my_putchar('\n');
	}
	return 1;
}

int colle(int x, int y)
{
	if(x <=0 || y <= 0)
		return 0;
	if(x == 1)
	{
		for(int i = 1; i <= y; i++)
		{
			my_putchar('B');
			my_putchar('\n');
		}
	}
	else if(y == 1)
	{
		for(int i = 1; i <= x; i++)
			my_putchar('B');
		my_putchar('\n');
	}
	else
	{
		colle_first(x);
		colle_mid(x, y);
		colle_last(x);
	}
	return 1;	
}
