#include <stddef.h>
#include <stdlib.h>
#include "./include/btree.h"
size_t btree_level_count(btree_t const *root)
{
	btree_t *tmp = (btree_t *)root;
	size_t deep = 0;
	if(tmp != NULL)
	{
		size_t ldeep = btree_level_count(tmp->left);
		size_t rdeep = btree_level_count(tmp->right);
		deep = ldeep >= rdeep ? ldeep + 1 : rdeep + 1;
	}
	return deep;
}