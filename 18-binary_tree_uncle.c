#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: the node to find the uncle of
 *
 * Return: the uncle node, NULL if node is NULL, has no sibling or
 * parent is null
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
		node->parent->parent == NULL ||
		node->parent->parent->left == NULL ||
		node->parent->parent->right == NULL)
	{
		return (NULL);
	}
	
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);

	return (0);
}
