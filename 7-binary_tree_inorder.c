#include "binary_trees.h"
/**
 * binary_tree_inorder - It print elements of a tree using in-order traversal
 * @tree: It the tree to go through
 * @func: the function to use
 * Return: returns Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
