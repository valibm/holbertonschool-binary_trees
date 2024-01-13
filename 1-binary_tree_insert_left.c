#include "binary_trees.h"

/**
 * binary_tree_insert_left - Is a function that inserts a node as the
 *                           left-child of another node.
 * @parent: Pointer to the node to insert the left-child.
 * @value: Value to store in the new node.
 * Return: Pointer to the created node, or NULL on failure or
 *         if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (parent->left)
	{
		node->left = parent->left;
		node->left->parent = node;
	}
	parent->left = node;

	return (node);
}
