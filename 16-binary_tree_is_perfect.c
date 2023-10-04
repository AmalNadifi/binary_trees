#include "binary_trees.h"

#include "binary_trees.h"

/**
 * binary_tree_height -ThIs function measures the height of a binary tree
 * @tree: ThE pointer to the root node of the tree to measure the height
 * Return: 0 ( if tree is NULL) or size_t of the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0; /*To store left and right height*/

	if (tree == NULL)
		return (0);

	/* Calculating the height of left subtree*/
	left_h = (tree->left ? 1 + binary_tree_height(tree->left) : 0);

	/* Calculating the height of right subtree */
	right_h = (tree->right ? 1 + binary_tree_height(tree->right) : 0);

	/* Returning the greatest height */
	return (left_h > right_h ? left_h : right_h);
}

/**
 * binary_tree_is_perfect -ThIs function checks if a binary tree
 * is perfect
 * @tree: ThE pointer to the root node of the tree to check
 * Return: 1 (tree is perfect) or 0 (otherwise)
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* the tree is perfect if the node has no children*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* The tree is full if the node has 2 children */
	if (tree->left != NULL && tree->right != NULL)
		/* Are left and right subtrees with the same height*/
		if (binary_tree_height(tree->left) ==
				binary_tree_height(tree->right))
			return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));

	return (0);
}
