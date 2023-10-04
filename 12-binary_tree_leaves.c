#include "binary_trees.h"

/**
 * binary_tree_leaves -ThIs function counts the leaves in a binary tree
 * @tree: ThE pointer to the root node of the tree to measure the size
 * Return: 0 ( if tree is NULL) or the size
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t res_leaves = 0; /*To store the total number of leaves*/

	if (tree == NULL)
		return (0);

	/* Calculating the number of leaves*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	res_leaves = binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right);


	/* Returning the result */
	return (res_leaves);
}
