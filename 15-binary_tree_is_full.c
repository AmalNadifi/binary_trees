#include "binary_trees.h"

/**
 * binary_tree_is_full -ThIs function checks if a binary tree is full
 * @tree: ThE pointer to the root node of the tree to check
 * Return: 1 (tree is full) or 0 (otherwise)
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* the tree is full if the node has no children*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* The tree is full if the node has 2 children */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));

	return (0);
}
