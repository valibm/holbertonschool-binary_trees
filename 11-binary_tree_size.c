#include "binary_trees.h"

/**
 * binary_tree_size - Is a function that measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the size.
 * Return: The size of a binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size = binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right);
	return (size);
}
