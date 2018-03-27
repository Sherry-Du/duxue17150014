#include<stdlib.h>
#include "./include/mylist.h"
#include "./include/my.h"

int my_delete_nodes(linked_list_t **begin, void const *data_ref, int (*cmp)())
{
	linked_list_t *temp = *begin;
	while (temp != NULL)
	{
		if (!(*cmp)(data_ref, (char *)temp->data))
			*begin = temp->next;
		temp = temp->next;
	}
	return 0;
}