#include "binary_trees.h"

/**
  * binary_tree_is_leaf - Check if a node is a leaf
  * @node: The node to check
  * Return: 1 if it's a node and 0 otherwise
  */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if ((node->left == NULL) && (node->right == NULL))
		return (0);

	return (1);
}
