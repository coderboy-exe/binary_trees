#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: the root node to check
 *
 * Return: 1 if full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int l_check;
	int r_check;

	if (tree == NULL)
		return (0);
	l_check = binary_tree_is_full(tree->left);
	r_check = binary_tree_is_full(tree->right);

	if (l_check == r_check)
		return (1);
	return (0);
}
