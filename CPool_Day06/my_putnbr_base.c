#include<unistd.h>
int my_strlen(char const *str);

int my_putnbr_base(int nbr, char const *base)
{
	char a[33] = {0}, *p = a;
	int r, flag = 1, len = my_strlen(base);
	if(nbr < 0)
	{
		flag = -1;
		nbr = -nbr; 
	}
	while(nbr > 0)
	{
		r = nbr % len;
		*p = base[r];
		nbr = nbr / len;
		p ++;
	}
	*p = '\0';
	int pl = my_strlen(a);
	if(flag < 0)
	{
		char ng = '-';
		write(1, &ng, 1);
	}
	for(int i = pl - 1; i >= 0; i--)
		write(1, &a[i], 1);
	return 1;
}