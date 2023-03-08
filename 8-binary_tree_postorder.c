#include "binary_trees.h"

/**
  * binary_tree_postorder - Traverse a tree in a postorderly manner
  * @tree: The pointer to the root of the tree
  * @func: The pointer to the function that defines the operation
  *        to be done on the data
  */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);

	binary_tree_postorder(tree->right, func);

	func(tree->n);
}
