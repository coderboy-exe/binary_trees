#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: node to measure the depth
 *
 * Return: depth of the tree, 0 if tree == NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = binary_tree_depth(tree->parent);
	depth += 1;
	if (tree->parent == NULL)
		depth -= 1;
	return (depth);
}
