#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: Pointer to the created node or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	struct binary_tree_s *oldNode = parent->right;

	if (parent == NULL)
		return (NULL);
	if (oldNode == NULL)
	{
		parent->right = binary_tree_node(parent, value);
		return (parent->right);
	}
	else
	{
		parent->right = binary_tree_node(parent, value);
		parent->right->right = (parent->right, oldNode->n);
		return (parent->right);
	}
}
