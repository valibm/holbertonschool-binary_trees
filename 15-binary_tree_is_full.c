#include "binary_trees.h"

/**
 * binary_tree_is_full - Is a function that checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 0 or 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	else if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (0);
}
