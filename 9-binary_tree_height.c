#include "binary_trees.h"

/**
 * binary_tree_height - f
 * @tree: t
 * Return: 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL)
		l += 1 + binary_tree_height(tree->left);
		if (tree->right != NULL)
		r += 1 + binary_tree_height(tree->right);

		return ((l > r) ? l : r);
	}
	return (0);
}
