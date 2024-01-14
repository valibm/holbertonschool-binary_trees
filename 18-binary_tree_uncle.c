#include "binary_trees.h"

/**
 * binary_tree_uncle - Is a function that finds the uncle of a node.
 * @node: Pointer to the node to find the uncle.
 *
 * Return: Pointer to the uncle node.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandpa;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	grandpa = node->parent->parent;

	if (grandpa->left && grandpa->left != node->parent)
		return (grandpa->left);
	else if (grandpa->right && grandpa->right != node->parent)
		return (grandpa->right);
	return (NULL);
}
