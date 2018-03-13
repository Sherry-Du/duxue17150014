#include<unistd.h>
int my_print_revalpha ( void )
{
	char ch = 'z';
	while(ch >= 'a')
	{
		write(1, &ch, 1);
		ch--;
	}
	return 1;
}
