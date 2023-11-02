#include "binary_trees.h"

/**
 * binary_tree_levelorder - Goes through a binary tree using level-order traversal
 * @tree: tree to be traversed
 * @func: pointer to the function to call
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *currentLevel[100];
	const binary_tree_t *nextLevel[100];
	const binary_tree_t *current;
	int i, currentLevelSize = 0, nextLevelSize = 0;

	if (tree && func)
	{
		currentLevel[currentLevelSize++] = tree;
		while (currentLevelSize > 0)
		{	
			nextLevelSize = 0;
			for (i = 0; i < currentLevelSize; i++)
			{
				current = currentLevel[i];
				func(current->n);
				if (current->left != NULL)
					nextLevel[nextLevelSize++] = current->left;
				if (current->right != NULL)
					nextLevel[nextLevelSize++] = current->right;
			}
			for (i = 0; i < nextLevelSize; i++)
				currentLevel[i] = nextLevel[i];
			currentLevelSize = nextLevelSize;
		}
	}
}
