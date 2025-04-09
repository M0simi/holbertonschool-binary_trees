#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a binary tree using pre-order traversal
 * @tree: pointer to the root node
 * @func: function to call for each node's value
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

		if (tree == NULL || func == NULL)
		return;


		func(tree->n);  /* for the root node */
		binary_tree_preorder(tree->left, func); /* for left */
		binary_tree_preorder(tree->right, func); /* right */
}
