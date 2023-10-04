#include "binary_trees.h"

/**
 * binary_tree_nodes -ThIs function counts the nodes with at least
 * 1 child in a binary tree
 * @tree: ThE pointer to the root node of the tree to count the number
 * of nodes
 * Return: 0 ( if tree is NULL) or the result
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t res_nodes = 0; /*To store the total number of nodes*/

	if (tree == NULL)
		return (0);

	/* Calculating the number of nodes with at least 1 child*/
	if (tree->left != NULL || tree->right != NULL)
		res_nodes = 1 + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right);

	/* Returning the result */
	return (res_nodes);
}
