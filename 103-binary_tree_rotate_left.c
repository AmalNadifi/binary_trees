#include "binary_trees.h"

/**
 * binary_tree_rotate_left -ThIs function performs a left rotation
 * on a binary tree
 * @tree: ThE pointer to the root node of the tree to rotate
 * Return: Pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	/* Check if tree/right child is NULL no rotation can be done*/
	if (tree == NULL || tree->right == NULL)
		return (NULL);

	binary_tree_t *new_root = tree->right;

	/* Updating the right child of the root to be the left child*/
	tree->right = new_root->left;

	/* Updating the parent pointer of the new left child */
	if (new_root->left != NULL)
		new_root->parent = tree;

	/* Updating the parent pointer of the new root to original rootparent*/
	new_root->parent = tree->parent;

	/* Updating the Parent's child pointer to point to the new root*/
	if (tree->parent != NULL)
	{
		if (tree == tree->parent->left)
			tree->parent->left = new_root;
		else
			tree->parent->right = new_root;
	}
	/* Making the original root the left child of the new root*/
	new_root->left = tree;
	tree->parent = new_root;

	/* Returning the pointer to the new root node of the rotated tree*/
	return (new_root);
}
