#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the leftt-child in
 * @value: value to store in the new node
 * Return: Pointer to the created node or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	struct binary_tree_s *oldNode = parent->left;

	if (parent == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		parent->left = binary_tree_node(parent, value);
		return (parent->left);
	}
	else
	{
		parent->left = binary_tree_node(parent, value);
		oldNode->parent = parent->left;
		parent->left->left = oldNode;
		return (parent->left);
	}
}

