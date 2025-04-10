#include "binary_trees.h"

/**
 * tree_depth - Gets the depth of the leftmost leaf node
 * @tree: Pointer to the root node of the tree
 *
 * Return: Depth of the tree
 */
int tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}

/**
 * is_perfect - Helper function to check if the tree is perfect
 * @tree: Pointer to the current node
 * @depth: Expected depth for all leaves
 * @level: Current level in the tree
 *
 * Return: 1 if perfect, 0 otherwise
 */
int is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (1);

	if (!tree->left && !tree->right)
		return (depth == level + 1);

	if (!tree->left || !tree->right)
		return (0);

	return (is_perfect(tree->left, depth, level + 1) &&
		is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	if (tree == NULL)
		return (0);

	d = tree_depth(tree);
	return (is_perfect(tree, d, 0));
}
