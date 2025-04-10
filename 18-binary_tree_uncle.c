#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if not found
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	grandparent = node->parent->parent;


	if (grandparent->left == node->parent)
		return (grandparent->right);
	else
		return (grandparent->left);
}
