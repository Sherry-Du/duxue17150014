#include "./include/btree.h"

void *btree_search_item(btree_t const *root, 
	void const *data_ref, int (*cmpf)())
{
	btree_t *node = (btree_t *)root;
	if (node == 0)
		return 0;
	else if (cmpf(data_ref, node->item) < 0)
		return btree_search_item(node->left, data_ref, cmpf);
	else if (cmpf(data_ref, node->item) == 0)
		return node;
	else
		return btree_search_item(node->right, data_ref, cmpf);
}