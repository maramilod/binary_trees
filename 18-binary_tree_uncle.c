#include "binary_trees.h"

/**
 * binary_tree_uncle - f
 * @node: n
 * Return: NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (!node->parent->parent->left || !node->parent->parent->right)
		return (NULL);

	if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);
	return (node->parent->parent->right);
}
