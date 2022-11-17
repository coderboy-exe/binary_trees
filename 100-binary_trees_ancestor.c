#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *
 * @first: first node
 * @second: second node
 *
 * Return: pointer to lowest common ancestor node, NULL if no common ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	binary_tree_t *l_ancestor;
	binary_tree_t *r_ancestor;

	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *) first);

	l_ancestor = first->parent;
	r_ancestor = second->parent;

	if (first == r_ancestor || l_ancestor == NULL ||
		(l_ancestor->parent == NULL && r_ancestor != NULL))
		return (binary_trees_ancestor(first, r_ancestor));

	else if (l_ancestor == second || r_ancestor == NULL ||
		(r_ancestor->parent == NULL && l_ancestor != NULL))
		return (binary_trees_ancestor(l_ancestor, second));

	return (binary_trees_ancestor(l_ancestor, r_ancestor));
}
