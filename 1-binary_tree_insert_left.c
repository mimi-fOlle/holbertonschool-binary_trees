#include "binary_trees.h"

/**
 * *binary_tree_insert_left - function that inserts a node as the left-child
 * of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: a pointer to the created node, or NULL on failure
 * or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftchild;

	if (parent == NULL)
		return (NULL);

	leftchild = binary_tree_node(parent, value);
	if (leftchild == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		leftchild->left = parent->left;
		parent->left->parent = leftchild;
	}
	parent->left = leftchild;

	return (leftchild);
}
