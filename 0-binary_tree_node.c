#include "binary_trees.h"

/**
 * binary_tree_node - creates a new binary tree node
 *
 * @parent: a pointer to the parent node
 * @Value: value of the new node
 * @return: a pointer to the new node or NULL on fail.
 **/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = (binary_tree_t *)mlloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	
	}

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
