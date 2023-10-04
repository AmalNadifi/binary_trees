#include "binary_trees.h"

/**
 * binary_tree_uncle -ThIs function finds the uncle of a node
 * in a binary tree
 * @node: ThE pointer to the node to find the uncle
 * Return: NULL (if node is NULL/if node has no uncle) or pointer to the
 * uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
			node->parent->parent == NULL)
		return (NULL);

	/* Checking if the parent is the left child of its parent*/
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	else
		return (NULL);
}
