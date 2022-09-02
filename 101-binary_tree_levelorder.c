#include "binary_trees.h"

/**
  * binary_tree_height - Measures the height of a binary tree
  * @tree: A pointer to the root node of the tree to measure the height
  *
  * Return: 0 if tree is NULL
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left >= right)
		return (left + 1);
	return (right + 1);
}

/**
  * current_level - Prints the current level
  * @root: A pointer of root
  * @level: The level
  *
  * Return: nothing
  */

void current_level(const binary_tree_t *root, size_t level, void (*func)(int))
{
	if (root == NULL)
		return;

	if (level == 1)
		func(root->n);

	else if (level > 1)
	{
		current_level(root->left, level - 1, func);
		current_level(root->right, level - 1, func);
	}
}

/**
  * binary_tree_levelorder - Using level-order traversal to go through a BT
  * @tree: A pointer to the root node of the tree to traverse
  * @func: A pointer to a function to call for each node
  *
  * Return: if tree or func is NULL, do nothing
  */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t h, i;

	h = binary_tree_height(tree);

	if (tree == NULL || func == NULL)
		return;

	for (i = 1; i <= h; i++)
		current_level(tree, i, func);
}
