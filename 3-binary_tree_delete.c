#include "binary_trees.h"

/**
 * binary_tree_delete - it  deletes an entire binary tree
 * @tree: pointer to the root node
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}
