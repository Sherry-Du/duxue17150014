#include<stdlib.h>
#include "./include/mylist.h"
#include "./include/my.h"

int my_list_size(linked_list_t const *begin);

void my_sort_list(linked_list_t **begin, int (*cmp)())
{
	linked_list_t *end, *p = *begin, *p1, *p2;
	p1 = (linked_list_t *)malloc(my_list_size((*begin)));
	p1->next = (*begin);
	(*begin) = p1;
	for(end = NULL; end != (*begin); end = p)
	{
		for(p = p1 = (*begin); p1->next->next != end; p1 = p1->next)
		{
			if(cmp((char *)p1->next->data, (char *)p1->next->next->data) > 0)
			{
				p2 = p1->next->next;
				p1->next->next = p2->next;
				p2->next = p1->next;
				p1->next = p2;
				p = p1->next->next;
			}
		}
	}
	p1 = (*begin);
	(*begin) = (*begin)->next;
	free(p1);
	p1 = NULL;
}