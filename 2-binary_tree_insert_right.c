#include "binary_trees.h"

/**
 * binary_tree_insert_right - f
 * @parent: p
 * @value: v
 * Return: r
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newn;

	if (!parent)
	{
		return (NULL);
	}
	newn = binary_tree_node(parent, value);
	if (newn == NULL)
	{
		return (NULL);
	}
	if (parent->right)
	{
		newn->right = parent->right;
		parent->right->parent = newn;
	}
	parent->right = newn;
	return (newn);
}
