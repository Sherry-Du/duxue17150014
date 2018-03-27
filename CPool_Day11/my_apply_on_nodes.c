#include<stdlib.h>
#include "./include/mylist.h"
#include "./include/my.h"

int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *))
{
	int lenSum = 0;
	while (begin != NULL)
	{
		lenSum = lenSum + (*f)((char *)begin->data);
		begin = begin->next;
	}
	return lenSum;
}