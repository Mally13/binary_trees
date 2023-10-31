#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the leftt-child in
 * @value: value to store in the new node
 * Return: Pointer to the created node or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *oldNode = parent->left, *newNode;

	if (parent == NULL)
		return (NULL);
	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);
	if (oldNode != NULL)
	{
		newNode->left = oldNode;
		oldNode->parent = newNode;
	}
	parent->left = newNode;
	return (newNode);
}
