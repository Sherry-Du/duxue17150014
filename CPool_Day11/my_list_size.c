#include<stdlib.h>
#include "./include/mylist.h"

int my_list_size(linked_list_t const *begin)
{
	int num = 0;
	while(begin != NULL)
	{
		num ++;
		begin = begin->next;
	}
	return num;
}


