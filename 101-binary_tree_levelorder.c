#include "binary_trees.h"

/**
 * binary_tree_levelorder - Goes through a binary tree using level-order traversal
 * @tree: tree to be traversed
 * @func: pointer to the function to call
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *currentLevel[100], *nextLevel[100], *current, **temp;
	int curentLevelSize = 0, nextLevelSize = 0;

	if (tree && func)
	{
		currentLevel[currentLevelSize++] = tree;
		while (currentLevelSize > 0)
		{
			current = currentLevel[currentLevelSize - 1];
			func(current->n);
			currentLevelSize--;
			if (current->left != NULL)
				nextLevel[nextLevelSize++] = current->left;
			if (current->right != NULL)
				nextLevel[nextLevelSize++] = current->right;

			if (currentLevelSize == 0)
			{
				temp = currentLevel;
				currentLevel = nextLevel;
				nextLevel = temp;
				currentLevelSize = nextLevelSize;
				nextLevelSize = 0;
			}
	}
}
