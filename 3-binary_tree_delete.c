#include "binary_trees.h"
/**
 * binary_tree_delete - frees the entire tree using recursion it free the node
 * @tree: It the tree to free
 * Return: returns Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}

}
