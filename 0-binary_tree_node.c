#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: pointer to the parent of the node to create
 * @value: value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	struct binary_tree_s *newNode = malloc(sizeof(struct binary_tree_s));

	if (newNode == NULL)
		return (NULL);
	else
	{
		newNode->parent = parent;
		newNode->n = value;
		newNode->left = NULL;
		newNode->right = NULL;

		return (newNode);
	}
}
