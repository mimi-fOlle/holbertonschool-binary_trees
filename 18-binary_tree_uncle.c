#include "binary_trees.h"

/**
  * binary_tree_uncle - Finds the uncle of a node
  * @node: A pointer to the node to find the uncle
  *
  * Return: A pointer to the uncle node; NULL if node is NULL
  * NULL if node has no uncle
  */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (node == NULL || node->parent == NULL ||
			node->parent->parent == NULL)
		return (NULL);

	uncle = node->parent->parent;

	if (uncle->left != node->parent)
		return (uncle->left);

	return (uncle->right);
}
