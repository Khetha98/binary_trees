#include "binary_trees.h"
/**
 * binary_tree_nodes - the function that returns nodes in a tree with children
 * @tree: It the tree to check
 * Return: It the number of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t  n = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		n += ((tree->left || tree->right) ? 1 : 0);
		n += binary_tree_nodes(tree->left);
		n += binary_tree_nodes(tree->right);
		return (n);
	}
}
