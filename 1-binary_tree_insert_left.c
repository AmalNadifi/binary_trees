#include "binary_trees.h"

/**
 * binary_tree_insert_left -ThIs function inserts a node
 * as the left-child of another node
 * @parent: ThE pointer to the node to insert the left-child in.
 * @value: The new node value
 * Return: pointer to the new node (success)
 * or NULL (failure or iff parent is NULL)
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	/* memory allocation for th enew node*/
	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	/* Configuration of the new node*/
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = parent->left;
	parent->left = new_node;
	if (new_node->left != NULL)
		new_node->left->parent = new_node;

	/* Returning the resultant pointer to node */
	return (new_node);
}
