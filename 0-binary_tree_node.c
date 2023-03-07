#include <stdlib.h>
#include "binary_trees.h"

/**
  * binary_tree_node - Create a binary tree node
  * @parent: The parent of the created node
  * @value: The value to be stored in the node
  * Return: The pointer to the created node
  */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
