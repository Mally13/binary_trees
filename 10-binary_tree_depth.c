#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: pointer to the node to be measured
 * Return: depth of the tree or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *currentNode = tree;

	if (tree == NULL)
		return (depth);
	while (currentNode->parent)
	{
		depth++;
		currentNode = currentNode->parent;
	}
	return (depth);
}
