#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a node in a binary tree
 *
 * @tree: node to measure the size
 *
 * Return: size of the tree, 0 if tree == NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l_size;
	size_t r_size;
	size_t size;

	if (tree == NULL)
		return (0);

	l_size = binary_tree_size(tree->left);
	r_size = binary_tree_size(tree->right);

	size = l_size + r_size;
	return (size + 1);
}
