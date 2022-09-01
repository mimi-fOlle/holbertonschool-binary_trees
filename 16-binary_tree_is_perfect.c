#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
		return (is_perfect(tree->left) == is_perfect(tree->right));
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (0);
}

/**
 * level_match - function that ckecks for the level match
 * @a: left side
 * @b: right side
 * Return: value + 1
 */

int level_match(int a, int b)
{
	if (a == b)
		return (a + 1);
	return (0);
}

/**
 * is_perfect - function that checks if the binary tree is perfect
 * @tree: the binary tree
 * Return: O if the tree is NULL
 */

int is_perfect(binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = is_perfect(tree->left);
	right = is_perfect(tree->right);
	return (level_match(left, right));
}
