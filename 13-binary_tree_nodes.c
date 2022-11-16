#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: root node to count the nodes
 *
 * Return: nodes with at least 1 child in the tree, 0 if tree == NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l_node;
	size_t r_node;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	else
	{
		l_node = binary_tree_nodes(tree->left);
		r_node = binary_tree_nodes(tree->right);

		return (l_node + r_node + 1);
	}
	return (0);
}
