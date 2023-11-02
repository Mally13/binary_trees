#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of nodes with atleast one child
 * @tree: pointer to the root node of the tree
 * Return: Number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		if (tree->left || tree->right)
			nodes++;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
