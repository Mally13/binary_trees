#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: pointer to the node
 * Return: pointer to the siblng to the node or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node)
	{
		if (node->parent && node->parent->left && node->parent->left != node)
			return (node->parent->left);
		else if (node->parent && node->parent->right && node->parent->right != node)
			return (node->parent->right);
		else
			return (NULL);
	}
	return (NULL);
}
