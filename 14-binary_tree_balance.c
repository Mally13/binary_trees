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
 * binary_tree_h - Calculates tha height of a tree
 * @tree: tree to be evaluated
 * Return: height of the tree
 */
int binary_tree_h(const binary_tree_t *tree)
{
	int l_height, r_height, height;

	if (tree == NULL)
	{
		return (-1);
	}
	l_height = binary_tree_h(tree->left);
	r_height = binary_tree_h(tree->right);
	height = 1 + max(l_height, r_height);
	return (height);
}


/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: tree to be measured
 * Return: Balance factor, if tree is NULL return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int bf = 0, l_height = 0, r_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	l_height = binary_tree_h(tree->left);
	r_height = binary_tree_h(tree->right);
	bf = l_height - r_height;
	return (bf);
}
