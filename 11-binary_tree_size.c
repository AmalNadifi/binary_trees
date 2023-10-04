#include "binary_trees.h"

/**
 * binary_tree_size -ThIs function measures the size of a binary tree
 * @tree: ThE pointer to the root node of the tree to measure the size
 * Return: 0 ( if tree is NULL) or the size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t res_size = 0; /*To store the resultant size*/

	if (tree == NULL)
		return (0);

	/* Calculating the size of the chosen node*/
	res_size = binary_tree_size(tree->left) +
		binary_tree_size(tree->right) + 1;

	/* Returning the resultant size */
	return (res_size);
}
