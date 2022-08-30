#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL, else return height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left1 = 0, right1 = 0;

		left1 = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		right1 = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((left1 > right1) ? left1 : right1);
	}
	return (0);
}

/**
 * binary_tree_balance - function that measures the balance
 * factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
