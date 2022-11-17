#include "binary_trees.h"

/**
 * count_nodes - counts the number of nodes in a binary tree
 *
 * @tree: root node to start count
 *
 * Return: number of nodes
 */

int count_nodes(const binary_tree_t *tree)
{
	int l_nodes, r_nodes;

	if (tree == NULL)
		return (0);

	l_nodes = count_nodes(tree->left);
	r_nodes = count_nodes(tree->right);
	
	return (l_nodes + r_nodes + 1);
}

/**
 * is_complete - checks nodes of the tree
 *
 * @tree: tree to check
 * @index: index to check
 * @num_nodes: number of nodes in the tree
 *
 * Return: 1 if complete, 0 otherwise
 */

int is_complete(const binary_tree_t *tree, int index, int num_nodes)
{
	if (tree == NULL)
		return (1);

        int l_check, r_check;

        if (index >= num_nodes)
                return (0);

        l_check = is_complete(tree->left, 2*index + 1, num_nodes);
        r_check = is_complete(tree->right, 2*index + 2, num_nodes);

        return (l_check && r_check);
}

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 *
 * @tree: root node of the tree to check
 *
 * Return: 1 if complete, 0 if tree is NULL or incomplete
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_complete(tree, 0, count_nodes(tree)));
}
