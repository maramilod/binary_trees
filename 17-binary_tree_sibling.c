#include "binary_trees.h"

/**
 * binary_tree_sibling - f
 * @node: n
 * Return: NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->right || !node->parent->left)
		return (NULL);

	if (node == node->parent->right)
		return (node->parent->left);
	return (node->parent->right);
}
