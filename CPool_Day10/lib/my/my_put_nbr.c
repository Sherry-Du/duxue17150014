#include<unistd.h>
int my_put_nbr(int nb)
{
	if(nb < 0)
	{
		char a = '-';
		write(1, &a, 1);
		nb=-nb;
	}
	if(nb >= 10)
		my_put_nbr(nb/10);
	char c = nb%10 + '0';
	write(1, &c, 1);
	return 1;
}

