#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: pointer to the node to fnd the uncle
 * Return: Pointer the uncle node or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle, *grandpa;

	if (node == NULL)
		return (NULL);
	grandpa = node->parent->parent;
	if (grandpa)
	{
		if (grandpa->left && grandpa->left != node->parent)
			uncle = grandpa->left;
		else
			uncle = grandpa->right;
		return (uncle);
	}

	return (NULL);
}
