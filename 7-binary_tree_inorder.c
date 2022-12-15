#include "binary_trees.h"

/**
 * binary_tree_preorder - searches through tree in pre-order traversal
 * @tree: pointer to root
 * @func: pointer to a function call
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_preorder(tree->left, func);
		func(tree->n);
		binary_tree_preorder(tree->right, func);
	}
}
