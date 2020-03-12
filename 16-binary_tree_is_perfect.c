#include "binary_trees.h"
#include "11-binary_tree_size.c"
#include "15-binary_tree_is_full.c"

/**
 *binary_tree_is_perfect - checks if a binary tree is perfect
 *@tree: pointer to the tree
 *Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	if (binary_tree_is_full(tree) && (left == right))
		return (1);

	return (0);
}
