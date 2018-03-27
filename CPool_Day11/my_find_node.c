#include<stdlib.h>
#include "./include/mylist.h"
#include "./include/my.h"

linked_list_t *my_find_node(linked_list_t const *begin, void const *data_ref, int(*cmp)())
{
	
	linked_list_t *tmp = (linked_list_t *)begin;
	while (tmp != NULL)
	{
		if(!(*cmp)(data_ref, (char *)tmp->data))
			return tmp;
		tmp = tmp->next;
	}
	return NULL;
}