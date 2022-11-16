#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: the node to find the sibling of
 *
 * Return: the sibling node, NULL if node is NULL, has no sibling or
 * parent is null
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
		node->parent->left == NULL || node->parent->right == NULL)
	{
		return (NULL);
	}

	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);

	return (0);
}
