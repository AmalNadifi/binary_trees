#include "binary_trees.h"

/**
 * binary_trees_ancestor -ThIs function finds the lowest common ancestor
 * of 2 nodes
 * @first: ThE pointer to the first node
 * @second: ThE pointer to the second node
 * Return: NULL (no common ancestor) or pointer to the lowest common
 * ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *ancestor = NULL;

	if (first == NULL || second == NULL)
		return (NULL);

	/* Checking if first or second are root node */
	if (binary_tree_is_root(first))
		return((binary_tree_t *)first);
	if (binary_tree_is_root(second))
		return((binary_tree_t *)second);

	const binary_tree_t *root = first;
	while (root->parent)
		root = root->parent;

	ancestor = binary_trees_ancestor_rec(first, second, root);
	return (ancestor);
}
 /**
  * binary_trees_ancestor_rec -ThIs is a recursive function to find
  * common ancestor
  * @first: ThE pointer to the first node
  * @second: ThE pointer to the second node
  * @check: The pointer to the node being checked
  * Return: NULL (no common ancestor) or pointer to the lowest common
  * ancestor
  */

binary_tree_t *binary_trees_ancestor_rec(const binary_tree_t *first,
		const binary_tree_t *second, binary_tree_t *check)
{
	binary_tree_t *left_ancestor = NULL, *right_ancestor = NULL;

	if (check == NULL)
		return (NULL);
	if (check == first || check == second)
		return ((binary_tree_t *)check);

	left_ancestor = binary_trees_ancestor_rec(first, second,
			check->left);
	right_ancestor = binary_trees_ancestor_rec(first, second,
			check->right);

	if (left_ancestor && right_ancestor)
		return (check);

	return (left_ancestor ? left_ancestor : right_ancestor);
}
