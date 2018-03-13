#include<unistd.h>
void my_putchar(char c)
{
	write(1, &c, 1);
}

void roll_comb(int n)
{
	for(char i = '0'; i <= '9', i++)
	{
		my_putchar(i);
		if(i <= n)
		{
			roll_comb(n-1);
		}
		else
		{
			my_putchar(',');
		}
		
	}
}

void fp(char i)
{
	for()
	{
		
	}
}

int my_print_combn(int n)
{
	char count = '0';
	for(i='0'; i < n; i++)
	{
		for(i;i<='9';i++)
		{
			my_putchar(i);
		}
		
	}
	for(char i='0';i<='9';i++)
	{
		my_putchar(i);
		for(char j=i+1;j<='9';j++)
		{
			my_putchar(j);
			if(j<=k)
			{
				
			for(char k=j+1;k<='9';k++)
			{
				my_putchar(k);
				my_putchar(',');
			}
			}
		}
	}
}


void main(){
int a=my_print_comb();
}
