#include "binary_trees.h"
#include <limits.h>


/**
 * is_bst - a util function that checks if a
 * binary tree is a bst
 * @tree: root node of a tree to be checked
 * @prev: a minimal value
 * Return: 1 or 0
 */
int is_bst(const binary_tree_t *tree, int *prev)
{
	if (tree == NULL)
		return (1);

	if (!is_bst(tree->left, prev))
		return (0);

	if (tree->n <= *prev)
		return (0);

	*prev = tree->n;

	return (is_bst(tree->right, prev));
}


/**
 * binary_tree_is_bst - Checks if a binary tree is a valid bst
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if true or 0 otherwise
 * If tree is NULL return 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int prev = INT_MIN;

	if (tree == NULL)
		return (0);
	return (is_bst(tree, &prev));
}
