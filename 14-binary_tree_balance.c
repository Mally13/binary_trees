#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: tree to be measured
 * Return: Balance factor, if tree is NULL return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int bf = 0, l_edges = 0, r_edges = 0;
	const binary_tree_t *root = tree;

	if (tree == NULL)
		return (bf);
	while (tree->left)
	{
		l_edges += 1;
		tree = tree->left;
	}
	while (root->right)
	{
		r_edges += 1;
		root = root->right;
	}
	bf = l_edges - r_edges;
	return (bf);
}
