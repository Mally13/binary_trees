#include "binary_trees.h"

/**
 * max - Returns the max value (a or b)
 * @a: value 1
 * @b: value 2
 * Return: max value
 */
int max(int a, int b)
{
	return ((a > b) ? a : b);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: tree to be measured
 * Return: height of the tree or 0 if tree is NULiL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height, l_height, r_height;

	if (tree == NULL)
		return (-1);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	height = 1 + max(l_height, r_height);
	return (height);
}
