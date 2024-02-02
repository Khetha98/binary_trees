#include "binary_trees.h"

/**
 * binary_tree_sibling - It a function that finds if the node is sibling
 * @node: It the node to check
 * Return: returns the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
