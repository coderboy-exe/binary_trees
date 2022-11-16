#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: root node to count the leaves
 *
 * Return: leaves of the tree, 0 if tree == NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l_leaf;
	size_t r_leaf;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	else
	{
		l_leaf = binary_tree_leaves(tree->left);
		r_leaf = binary_tree_leaves(tree->right);

		return (l_leaf + r_leaf);
	}
	return (0);
}
