#include "binary_trees.h"

/**
  * binary_tree_insert_right - Inserts a node as the right-child
  * @parent: A pointer to the node to insert the right-child
  * @value: The value to store in the new node
  *
  * Return: A pointer to the created node,
  * or NULL on failure or if parent is NULL
  */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = binary_tree_node(parent, value);
	if (new == NULL || parent == NULL)
		return (NULL);

	if (parent->right == NULL)
		parent->right = new;
	else
	{
		new->right = parent->right;
		parent->right = new;
	}
	return (new);
}
