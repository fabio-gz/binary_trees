#include "binary_trees.h"
/**
 *binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *@tree: pointer to the tree
 *Return: num of nodes with childs
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		node = binary_tree_nodes(tree->left)
			+ binary_tree_nodes(tree->right);
		return (node + 1);
	}
	else
	{
		return (node);
	}
}
