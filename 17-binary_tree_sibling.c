#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a given node in a binary tree.
 * @node: Pointer to the node to find the sibling for.
 *
 * Return: Pointer to the sibling node, or NULL if node has no sibling or
 *         if node is NULL or has no parent.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
	{
		if (node->parent->right != NULL)
			return (node->parent->right);

		else
			return (NULL);
	}
	if (node == node->parent->right)
	{
		if (node->parent->left != NULL)
			return (node->parent->left);

		else
			return (NULL);
	}
	return (NULL);
}
