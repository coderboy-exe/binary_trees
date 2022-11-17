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
 * print_level - gets values at all levels of a binary tree
 *
 * @tree: tree nodes whose values will be gotten
 * @func: function pointer to value to call each node
 * @level: level at which values will be gotten
 *
 * Return: level values to be printed
 */
void print_level(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (tree == NULL)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		print_level(tree->left, func, level - 1);
		print_level(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_levelorder - C function to print in level order
 *
 * @tree: node to be printed
 * @func: function pointer to call each node
 *
 * Return: printed data
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level;
	size_t height;

	if (tree == NULL || func == NULL)
		return;
	height = binary_tree_height(tree) + 1;
	for (level = 1; level <= height; level++)
		print_level(tree, func, level);
}
