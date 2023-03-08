#include "binary_trees.h"

/**
  * binary_tree_preorder - Traverses a tree using the preorder method
  * @tree: The pointer to the root of the tree
  * @func: The pointer to the fuction that defines what operation
  *        to be done on the data in the node
  */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);

	binary_tree_preorder(tree->right, func);
}
