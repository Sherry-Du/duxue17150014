#include<unistd.h>
#include "../hfile/my_isneg.h"
int main()
{
	my_isneg(0);
	my_isneg(1);
	my_isneg(-1);
	return 0;
}
