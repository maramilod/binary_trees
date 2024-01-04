#include "binary_trees.h"

/**
 * binary_tree_size - f
 * @tree: t
 * Return: 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t si = 0;

	if (tree)
	{
		si++;
		si += binary_tree_size(tree->left);
		si += binary_tree_size(tree->right);
	}

	return (si);
}
