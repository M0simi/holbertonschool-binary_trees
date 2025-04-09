#include "binary_trees.h"

/**
 * height - helper function to calculate height of a tree
 */
int height(const binary_tree_t *tree)
{
	int left, right;


	if (tree == NULL)
		return (0);

	left = height(tree->left);
	right = height(tree->right);

	return ((left > right ? left : right) + 1);
}


/**
 * binary_tree_balance - measures the balamce factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);


	return (height(tree->left) - height(tree->right));
}
