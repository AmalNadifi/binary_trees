#include "binary_trees.h"

/**
 * binary_tree_is_root -ThIs function checks if a node is a root
 * @node: ThE pointer to the node to check
 * Return: 1 (if the node is successfully a root)
 * or 0 (failure or node is NULL)
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	/* Checking if the node is a root */
	if (node->parent == NULL)
		return (1);
	/* Otherwise its not a root */
	return (0);
}
