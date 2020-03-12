#include "binary_trees.h"
/**
 *binary_tree_sibling - finds the sibiling of a node
 *@node: pointer to the node
 *Return: pointer to the sibiling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
	    node->parent->right == NULL || node->parent->left == NULL)
		return (NULL);

	if (node->parent->right == node)
	{
		return (node->parent->left);
	}
	else
	{
		return (node->parent->right);
	}
}
