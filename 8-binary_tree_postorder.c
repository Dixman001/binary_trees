#include "binary_trees.h"

/**
 * binary_tree_postorder - searches through tree in postorder traversal
 * @tree: pointer to root
 * @func: pointer to a function call
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
