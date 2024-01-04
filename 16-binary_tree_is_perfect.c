#include "binary_trees.h"

/**
 * sides - f
 * @tree: t
 * Return: 0
 */
int sides(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (-1);

	if (tree->left)
		left += 1 + sides(tree->left);

	if (tree->right)
		right += 1 + sides(tree->right);

	return (left + right);
}

/**
 * binary_tree_is_perfect - f
 * @tree: t
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect;

	if (!tree)
		return (0);

	perfect = 1 + sides(tree->left);
	perfect -= 1 + sides(tree->right);

	return (perfect == 0 ? 1 : 0);
}
