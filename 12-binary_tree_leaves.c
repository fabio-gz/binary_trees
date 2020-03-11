#include "binary_trees.h"
/**
 *binary_tree_leaves - counts the leaves in a tree
 *@tree: pointer to a tree
 *Return: number of leafs
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		leaf = binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right);
		return (leaf);
	}
}
