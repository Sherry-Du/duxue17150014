#include<stdlib.h>
#include "./include/mylist.h"
#include "./include/my.h"

linked_list_t *create_new_element(const char *av)
{
	linked_list_t *elem = NULL;
	int size = sizeof(elem);
	elem = malloc(size);
	if (elem == NULL)
		return NULL;
	char *tmp = malloc(my_strlen(av) + 1);
	elem->data = my_strcpy(tmp, av);
	elem->next = NULL;
	return (elem);
}

void add_elem_to_list(linked_list_t **list, linked_list_t *elem)
{
	linked_list_t *tmp = *list;
	*list = elem;
	elem->next = tmp;
}

linked_list_t *my_params_to_list(int ac, char * const *av)
{
	linked_list_t *list = NULL;
	for(int i = 0; i < ac; i++)
	{
		linked_list_t *new_ele = create_new_element(av[i]);
		add_elem_to_list(&list, new_ele);
	}
	return list;
}

