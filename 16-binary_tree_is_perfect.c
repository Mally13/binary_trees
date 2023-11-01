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

	if (tree)
	{
		while (tree->left)
		{	if (tree->left->right)
				l_edges += 1;
			l_edges += 1;
			tree = tree->left;
		}
	}
	if (root)
	{
		while (root->right)
		{	if (root->right->left)
				r_edges += 1;
			r_edges += 1;
			root = root->right;
		}
	}
	bf = l_edges - r_edges;
	return (bf);
}


/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: perfection of the tree, return 0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect  = 0, bal;

	if (tree == NULL)
		return (0);

	bal = binary_tree_balance(tree);
	if (bal == 0)
		perfect = 1;
	return (perfect);
}
