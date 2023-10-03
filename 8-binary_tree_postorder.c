#include "binary_trees.h"

/**
 * binary_tree_postorder -ThIs function goes through a binary tree
 * using the post_order traversal
 * @tree: ThE pointer to the root node of the tree to traverse
 * @func: ThE pointer to a function to call for each node
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Traversing the left side of the binary tree */
	binary_tree_postorder(tree->left, func);

	/* Traversing the right side of the binary tree */
	binary_tree_postorder(tree->right, func);

	/* Calling the function for the current node value*/
	func(tree->n);
}
