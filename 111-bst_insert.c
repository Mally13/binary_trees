#include "binary_trees.h"

/**
 * bst_insert - Inserts a value into a bnary search tree
 * @tree: Double pointer to the root node of the bst to nsert value
 * @value: value to be inserted
 * Return: pointer to the created node or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *root, *new;

	if (tree != NULL)
	{
		root = *tree;

		if (root == NULL)
		{
			new = binary_tree_node(root, value);
			if (new == NULL)
				return (NULL);
			return (*tree = new);
		}

		if (value < root->n)
		{
			if (root->left != NULL)
				return (bst_insert(&root->left, value));

			new = binary_tree_node(root, value);
			if (new == NULL)
				return (NULL);
			return (root->left = new);
		}

		if (value > root->n)
		{
			if (root->right != NULL)
				return (bst_insert(&root->right, value));
			new = binary_tree_node(root, value);
			if (new == NULL)
				return (NULL);
			return (root->right = new);
		}
	}
	return (NULL);

}
