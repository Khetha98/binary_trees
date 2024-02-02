#include "binary_trees.h"

/**
 * binary_tree_height_b - It Measures height of a binary tree for a bal tree
 * @tree: It the tree to go through
 * Return: returns the height
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t leaf = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			leaf = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			r = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((leaf > r) ? leaf : r);
	}
}

/**
 * binary_tree_balance -It  Measures balance factor of the binary tree
 * @tree: It the tree to go through
 * Return: returns balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int r = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		r = ((int)binary_tree_height_b(tree->right));
		total = left - r;
	}
	return (total);
}
