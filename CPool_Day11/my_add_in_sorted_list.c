#include<stdlib.h>
#include "./include/mylist.h"
#include "./include/my.h"

int my_list_size(linked_list_t const *begin);

void my_add_in_sorted_list(linked_list_t **begin, void *data, int (*cmp)())
{
	linked_list_t *p = *begin, *p1, *p2;
	p1 = (linked_list_t *)malloc(my_list_size((*begin)));
	p1->next = p;
	p = p1;
	p2 = (linked_list_t *)malloc(my_list_size((*begin)));
	p2->data = data;
	while((*cmp)((char *)p->next->data, data) < 0)
		p = p->next;
	if(p != NULL)
	{
		p2->next = p->next;
		p->next = p2;
	}
	else
	{
		p->next = p2;
		p2->next = NULL;
	}
}