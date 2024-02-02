#include "binary_trees.h"
/**
 * binary_tree_is_leaf - knows if the node is a leaf
 * @node: It node to study
 * Return: returns 1 if it a leaf or 0 if it not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
