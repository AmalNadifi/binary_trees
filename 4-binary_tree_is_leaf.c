#include "binary_trees.h"

/**
 * binary_tree_is_leaf -ThIs function checks if a node is a leaf
 * @node: ThE pointer to the node to check
 * Return: 1 (if the node is successfully a leaf)
 * or 0 (failure or node is NULL)
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	/* Checking if the node is a leaf */
	if (node->left == NULL && node->right == NULL)
		return (1);
	/* Otherwise its not a leaf */
	return (0);
}
