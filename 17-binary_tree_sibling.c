#include "binary_trees.h"

/**
  * binary_tree_sibling - Finds the sibling of a node
  * @node: A pointer to the node to find the sibling
  *
  * Return: A pointer to the sibling node; NULL if node and parent are NULL
  * NULL if node has no sibling
  */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *root;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	root = node->parent;

	if (root->left != node)
		return (root->left);

	return (root->right);
}
