#include<stdlib.h>
#include "./include/mylist.h"

void my_concat_list(linked_list_t **begin1, linked_list_t *begin2)
{
	linked_list_t *temp = *begin1;
	while(temp->next != NULL)
		temp = temp->next;
	temp->next = begin2;	
}