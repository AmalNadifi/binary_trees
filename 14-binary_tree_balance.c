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
 * binary_tree_balance -ThIs function measure the balance factor
 * of a binary tree
 * @tree: ThE pointer to the root node of the tree to measure
 * the balance factor
 * Return: 0 ( if tree is NULL) or the result
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int res_balance = 0; /* To store the balance factor */
	int left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);

	/* Calculating the balance factor*/
	left_h = (tree->left) ? (int)binary_tree_height(tree->left) : -1;
	right_h = (tree->right) ? (int)binary_tree_height(tree->right) : -1;
	res_balance = left_h - right_h;

	/* Returning the result */
	return (res_balance);
}
