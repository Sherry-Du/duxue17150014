#include<unistd.h>

int my_putchar(char c);

void head(int cols[], int row, int max)
{
	for(int i = 0 ; i < row; i ++)
	{
		for(int j = 0; j < (max - cols[i]) / 2; j ++)
			my_putchar(' ');
		for(int k = 0; k < cols[i]; k ++)
			my_putchar('*');
		my_putchar('\n');
	}
}

void root(int max, int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < (max - n) / 2; j ++)
			my_putchar(' ');
		for(int k = 0; k < n; k ++)
			my_putchar('|');
		my_putchar('\n');
	}
}

void tree(int size)
{
	if(size == 0)
		return;
	int rowHead = 3 * size + ((size + 1) * size) / 2;
	int cols[rowHead];
	cols[0] = 1;
	int j = 0, init = 1, increment = 2;
	for(int i = 1; i <= size; i++)
	{
		int a;
		for(int r = 0; j < (3 * i + ((i + 1) * i) / 2); j ++, r ++)
			cols[j] = init + increment * r;
		init = cols[j-1] - 2;
	}
	int max = cols[j-1];
	head(cols, rowHead, max);
	root(max, size);
}

