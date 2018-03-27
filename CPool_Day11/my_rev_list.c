#include<stdlib.h>
#include "./include/mylist.h"
void my_rev_list(linked_list_t **begin)
{
	linked_list_t *tmp = *begin;
	linked_list_t *p1, *p2, *p3;  
	p1 = (*begin);  
	p2 = p1->next;  
	while(p2)  
	{  
		p3 = p2->next;  
		p2->next = p1;  
		p1 = p2;
		p2 = p3;   
	}  
	(*begin)->next = NULL;  
	(*begin) = p1;  
}
