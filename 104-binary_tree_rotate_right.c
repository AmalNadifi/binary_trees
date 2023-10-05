#include "binary_trees.h"

/**
 * binary_tree_rotate_right -ThIs function performs a right rotation
 * on a binary tree
 * @tree: ThE pointer to the root node of the tree to rotate
 * Return: Pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	/* Check if tree/left child is NULL no rotation can be done*/
	if (tree == NULL || tree->left == NULL)
		return (NULL);

	new_root = tree->left;
	/* Updating the left child of the root to be the right child*/
	tree->left = new_root->right;

	/* Updating the parent pointer of the new right child */
	if (new_root->right != NULL)
		new_root->right->parent = tree;

	/* Updating the parent pointer of the new root to original rootparent*/
	new_root->parent = tree->parent;

	/* Making the original root the right child of the new root*/
	new_root->right = tree;
	tree->parent = new_root;

	/* Returning the pointer to the new root node of the rotated tree*/
	return (new_root);
}
