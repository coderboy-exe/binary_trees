#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left child of another node
 *
 * @parent: node to inseet left child in
 * @value: the value to put in the new node
 *
 * Return: pointer to the created node or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (node == NULL || parent == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	if (parent->left)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	parent->left = node;
	return (node);
}
