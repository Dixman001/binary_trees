#include "binary_trees.h"

/**
 * binary_tree_node - creates a new binary tree node
 *
 * @parent: a pointer to the parent node
 * @Value: value of the new node
 * @return: a pointer to the new node or NULL on fail.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* decalration of new node */
	binary_tree_t *newNode;

	/* memory allocation */
	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	
	}

	/* assignment of node property */
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	/* return pointer to the node */
	return (newNode);
}
