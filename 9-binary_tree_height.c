#include "binary_trees.h"
#include <stdlib.h>

/**
 * max - Returns the greater of two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The greater of a or b.
 */
int max(int a, int b)
{
	return ((a > b) ? a : b);
}
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Height of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

return (max(binary_tree_height(tree->left), binary_tree_height(tree->right)) + 1);

}
