#include <stdlib.h>
#include "binary_trees.h"

/**
  * binary_tree_delete - Delete the tree as a whole and its children
  * @tree: The pointer to the root parent
  */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);

	binary_tree_delete(tree->right);

	free(tree);
}
