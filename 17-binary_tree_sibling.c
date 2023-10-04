#include "binary_trees.h"

/**
 * binary_tree_sibling -ThIs function finds the sibling of a node
 * in a binary tree
 * @node: ThE pointer to the node to find the sibling
 * Return: NULL (if parent is NULL/if node is NULL/if node has no sibling)
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* nodes are siblings if they have same parent*/
	if (node->parent->left == node)
		return (node->parent->right);
	else if (node->parent->right == node)
		return (node->parent->left);
	else
		return (NULL);
}
