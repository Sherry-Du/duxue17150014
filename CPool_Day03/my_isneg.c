#include<unistd.h>
int my_isneg(int n)
{
	char ch;
	if(n < 0)
	{
		ch = 'N';
	}
	else
	{
		ch = 'P';
	}
	write(1, &ch, 1);
	return 1;
}
