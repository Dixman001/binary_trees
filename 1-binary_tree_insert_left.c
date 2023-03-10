#include "binary_trees.h"

/**
 * binary_tree_insert_left -inserts a node as left child of another node
 *
 * @parent: a pointer to the parent node
 * @Value: value of the new node
 *
 * Return: a pointer to the new node or NULL on fail.
 *
 * Description: If parent already has a left-child, new node
 * 		replaces old parent node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	new->right = NULL;
	new->left = parent->left;
	parent->left = new;

	if (new->left)
		new->left->parent = new;
	return (new);
}
