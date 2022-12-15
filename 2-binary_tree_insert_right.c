#include "binary_trees.h"

/**
 * binary_tree_insert_left -inserts a node as left child of another node
 *
 * @parent: a pointer to the parent node
 * @Value: value of the new node
 * @return: a pointer to the new node or NULL on fail.
 **/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = mlloc(sizeof(binary_tree_t));

	if (!new) || (!parent)
	{
		return (NULL);
	
	}

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;
	if (new->right)
		new->right->parent = new;
	return (new);
}
