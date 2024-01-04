#include "binary_trees.h"

/**
 * binary_tree_is_leaf - f
 * @node: v
 * Return: 0 or 1
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
	{
		return (0);
	}
	return (1);
}
