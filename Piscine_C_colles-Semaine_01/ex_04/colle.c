#include<unistd.h>
int my_putchar(char c);

int colle_up_down(int x)
{
	my_putchar('A');
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

int colle_x1(int y)
{
	for(int i = 1; i <= y; i++)
	{
		my_putchar('B');
		my_putchar('\n');
	}	
}

int colle_y1(int x)
{	
	for(int i = 1; i <= x; i++)
		my_putchar('B');
	my_putchar('\n');
}

int colle(int x, int y)
{
	if(x <=0 || y <= 0)
		return 0;
	if(x == 1)
		colle_x1(y);
	else if(y == 1)
		colle_y1(x);
	else
	{
		colle_up_down(x);
		colle_mid(x, y);
		colle_up_down(x);
	}
	return 1;	
}