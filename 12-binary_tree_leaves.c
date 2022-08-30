#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Return: 0 if the tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t b_leaves = 0;

	if (tree)
	{
		b_leaves += (!tree->left && !tree->right) ? 1 : 0;
		b_leaves += binary_tree_leaves(tree->left);
		b_leaves += binary_tree_leaves(tree->right);
	}
	return (b_leaves);
}
