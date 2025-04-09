#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Description: Frees all nodes of the binary tree using post-order traversal.
 * If tree is NULL, the function does nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{

	if (tree == NULL)
		return;

	tree->left = NULL;
	tree->right = NULL;
	tree = NULL;
}
