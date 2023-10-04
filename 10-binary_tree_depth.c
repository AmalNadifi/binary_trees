#include "binary_trees.h"

/**
 * binary_tree_depth -ThIs function measures the depth of a node
 * in binary tree
 * @tree: ThE pointer to the node to measure the depth
 * Return: 0 ( if tree is NULL) or size_t of the height
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t res_depth = 0; /*To store the resultant depth*/

	if (tree == NULL)
		return (0);

	/* Calculating the depth of the chosen node*/
	while (tree->parent != NULL)
	{
		res_depth++;
		tree = tree->parent;
	}

	/* Returning the resultant depth */
	return (res_depth);
}
