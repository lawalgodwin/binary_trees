#include "binary_trees.h"

/**
  * binary_tree_inorder - Traverse the tree using the inoder method
  * @tree: The pointer to the tree to traverse
  * @func: The pointer to the function that defines the operation
  *        to be done on the data
  */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);

	func(tree->n);

	binary_tree_inorder(tree->right, func);
}
