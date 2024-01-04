#include "binary_trees.h"

/**
 * binary_tree_insert_left - function
 * parent: pa
 * value: va
 * Return: r
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newn;

	if (parent == NULL)
		return (NULL);

	newn = binary_tree_node(parent, value);
	if (newn == NULL)
		return (NULL);

	if (parent->left)
	{
		newn->left = parent->left;
		parent->left->parent = newn;
	}
	parent->left = newn;
	return (newn);
}
