#include "binary_trees.h"
/**
 *binary_tree_node - create a binary tree node
 *@parent: pointer to the parent node
 *@value: node's integer
 *Return: pointer to the new node or NUll on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
