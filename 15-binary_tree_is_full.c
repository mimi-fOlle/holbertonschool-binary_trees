#include "binary_trees.h"

/**
  * binary_tree_is_full - Checks if a binary tree is full
  * @tree: A pointer to the root node of the tree to check
  *
  * Return: 0 if tree is NULL
  */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	else
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (1);
	else
		return (0);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	return (left && right);
}
