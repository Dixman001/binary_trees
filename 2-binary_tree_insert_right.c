#include "binary_trees.h"

/**
 * binary_tree_insert_right -inserts a node as right child of another node
 *
 * @parent: a pointer to the parent node
 * @Value: value of the new node
 *
 * Return: a pointer to the new node or NULL on fail.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
	{
		return (NULL);
	}
	
	new = malloc(sizeof(binary_tree_t));

	if (!new)
	{
		return (NULL);
	}

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;
	
	if (new->right)
		new->right->parent = new;
	return (new);
}
