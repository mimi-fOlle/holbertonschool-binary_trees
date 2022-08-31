#include "binary_trees.h"

/**
  * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
  * @first: A pointer to the first node
  * @second: A pointer to the second node
  *
  * Return: A pointer to the lowest common ancestor of two given nodes
  * NULL if no common ancestor was found
  */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *tmp1, *tmp2;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	if (first->parent == second->parent)
		return (first->parent);

	tmp1 = (binary_tree_t *)first;
	while (tmp1)
	{
		tmp2 = (binary_tree_t *)second;
		while (tmp2)
		{
		/*	tmp2 = tmp2->parent;*/
			if (tmp1 == tmp2)
				return (tmp1);
			tmp2 = tmp2->parent;
		}
		tmp1 = tmp1->parent;
	}
	return (NULL);
}
