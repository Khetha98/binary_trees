#include "binary_trees.h"
/**
 * tree_is_perfect - It the function that says if tree is perfect or not
 * @tree: It the tree to check
 * Return: 0 if it not a perfect or other number at the level of height
 */

int tree_is_perfect(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree->left && tree->right)
	{
		l = 1 + tree_is_perfect(tree->left);
		r = 1 + tree_is_perfect(tree->right);
		if (r == l && r != 0 && l != 0)
			return (r);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_is_perfect - says if it perfect or not a tree
 * @tree: It a tree to check
 * Return: returns 1 is it is or 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		r = tree_is_perfect(tree);
		if (r != 0)
		{
			return (1);
		}
		return (0);
	}
}
