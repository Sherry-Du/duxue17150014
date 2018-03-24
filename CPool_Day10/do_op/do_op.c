#include <stdlib.h>
#include "./lib/my.h"
int cul(int v1,char op,int v2)
{
	int re = 0;
	if(op == '+'){
		re = v1 + v2;
	}
	if(op == '-'){
		re = v1 - v2;
	}
	if(op == '*'){
		re = v1 * v2;
	}
	if(op == '/'){
		if(v2 == 0)
			{
				my_putstr("Stop: division by zero\n");
				return 0;
			}
		else
			re = v1 / v2;
	}
	if(op == '%'){
		if(v2 == 0)
			{
				my_putstr("Stop: modulo by zero\n");
				return 0;
			}
		else
			re = v1 % v2;
	}
	my_put_nbr(re);
	my_putchar('\n');
	return 0;
}
int main(int argc,char **argv)
{
	int v1,v2;
	char op;
	int re;
	if(argc == 1 || argc > 4){
		return 0;
	}
	if((argv[1][0]  > '0' && argv[1][0] < '9') || argv[1][0] == '+' || argv[1][0] == '-')
		v1 = my_getnbr(argv[1]);
	else
		v1 = 0;
	if((argv[3][0]  > '0' && argv[3][0] < '9') || argv[3][0] == '+' || argv[3][0] == '-')
		v2 = my_getnbr(argv[3]);
	else
		v2 = 0;
	op = argv[2][0];
	cul(v1,op,v2);
	return 0;
}
