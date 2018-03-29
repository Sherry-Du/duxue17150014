#include<stdlib.h>
#include "./include/btree.h"

btree_t *btree_create_node(void *item)
{
	btree_t *tmp;
	tmp = (btree_t*)malloc(sizeof(btree_t));
	if (!tmp)
		return NULL;
	tmp->item = item;
	tmp->left = NULL;
	tmp->right = NULL;
	return tmp;
}
