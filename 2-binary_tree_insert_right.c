#include "binary_trees.h"

/**
  * binary_tree_insert_right - Insert a node a right child of a parent
  * @parent: The parent
  * @value: The value of the node
  * Return: The node point or NULL is operation fails
  */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	if (newnode == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = newnode;
		return (newnode);
	}

	newnode->right = parent->right;

	newnode->right->parent = newnode;

	parent->right = newnode;
	return (newnode);
}
