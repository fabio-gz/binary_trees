#include "binary_trees.h"
/**
 *binary_tree_depth - measures the depth
 *@tree: pointer to the tree
 *Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);

	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
