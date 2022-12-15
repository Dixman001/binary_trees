#include "binary_trees.h"

/**
 * binary_tree_inorder - searches through tree in inorder traversal
 * @tree: pointer to root
 * @func: pointer to a function call
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
