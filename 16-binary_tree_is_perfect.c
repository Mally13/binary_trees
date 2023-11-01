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
 * binary_tree_height - Calculates tha height of a tree
 * @tree: tree to be evaluated
 * Return: height of the tree
 */
int binary_tree_height(const binary_tree_t *tree)
{
	int l_height, r_height, height;

	if (tree == NULL)
	{
		return (0);
	}
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	height = 1 + max(l_height, r_height);
	return (height);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: perfection of the tree, return 0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect = 0, l_height, r_height;

	if (tree == NULL)
		return (0);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	if (l_height == r_height)
		perfect = 1;
	return (perfect);
}
