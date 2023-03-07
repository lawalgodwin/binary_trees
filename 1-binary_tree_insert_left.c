#include <stdlib.h>
#include "binary_trees.h"

/**
  * binary_tree_insert_left - Insert a node as the left child of parent
  * @parent: The parent node
  * @value: The value to put in the child node to insert at the parent's left
  * Return: The pointer to the node inserted as parent left child or NULL
  *         if not successful
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	if (newnode == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		newnode->left = parent->left;
		return (newnode);
	}
	newnode->left = parent->left;
	newnode->left->parent = newnode;
	parent->left = newnode;
	return (newnode);
}
