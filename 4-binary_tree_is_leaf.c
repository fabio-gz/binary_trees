#include "binary_trees.h"
/**
 *binary_tree_is_leaf - checks if a node is a leaf
 *@node: pointer to node
 *Return: 1 if is a leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
