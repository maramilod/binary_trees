#include "binary_trees.h"

/**
 * binary_tree_postorder - f
 * @tree: t
 * @func: f
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func != NULL && tree != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
