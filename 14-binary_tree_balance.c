#include "binary_trees.h"

#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: root node of the tree
 *
 * Return: height, 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lDepth;
	size_t rDepth;

	if (tree == NULL)
		return (0);

	else
	{
		/* use depth to compute height */
		lDepth = binary_tree_height(tree->left) + 1;
		rDepth = binary_tree_height(tree->right) + 1;

		if (tree->left == NULL && tree->right == NULL)
		{
			return (1);
		}

		if (lDepth > rDepth)
			return (lDepth);
		else
			return (rDepth);
	}
}

/**
 * binary_tree_balance - measures the balacne factor of a binary tree
 *
 * @tree: root node to measure the balance factor
 *
 * Return: balance factor of the tree, 0 if tree == NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_node;
	int r_node;

	if (tree == NULL)
		return (0);

	l_node = binary_tree_height(tree->left);
	r_node = binary_tree_height(tree->right);

	return (l_node - r_node);
}
