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
			lDepth -= 1;
			rDepth -= 1;
		}

		if (lDepth > rDepth)
			return (lDepth);
		else
			return (rDepth);
	}
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: the root node to check
 *
 * Return: 1 if perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l_check;
	int r_check;

	if (tree == NULL)
		return (0);
	l_check = binary_tree_height(tree->left);
	r_check = binary_tree_height(tree->right);

	if (l_check == r_check)
		return (1);
	return (0);
}
