#include<stdlib.h>
#include "./include/mylist.h"
#include "./include/my.h"

int my_apply_on_matching_nodes(linked_list_t *begin, int (*f)(), 
void const *data_ref ,int (*cmp)())
{
	int lenSum = 0;
	while (begin != NULL)
	{
		if(!(*cmp)(data_ref, (char *)begin->data))
			lenSum = lenSum + (*f)((char *)begin->data);
		begin = begin->next;
	}
	return lenSum;
}