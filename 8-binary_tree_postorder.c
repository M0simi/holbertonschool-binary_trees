#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse binary tree using post-order
 * @tree: is a pointer to the root node
 * @func: is a pointer to function to call each node
 * if tree or func is NULL do nothig
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{

if (tree == NULL || func == NULL)
return;


binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
