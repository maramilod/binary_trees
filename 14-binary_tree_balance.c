#include "binary_trees.h"

/**
 * binary_tree_height - measure the balance of the tree.
 * @tree: Pointer
 * Return: 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int _left = 0;
	int _right = 0;

	if (tree == NULL)
		return (0);

	_left = binary_tree_height(tree->left);
	_right = binary_tree_height(tree->right);
	if (_left > _right)
		return (_left + 1);
	else
		return (_right + 1);
}

/**
 *  binary_tree_balance -measure the balance of the tree.
 * @tree: Pointer
 * Return: Balance
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
