#include "binary_trees.h"
/**
 *binary_tree_insert_left - inserts a node as the left child
 *@parent: pointer to the parent node
 *@value: node's integer
 *Return: new node or NUll if failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	if (parent == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		new->parent = parent;
		parent->left = new;
		new->left = NULL;
		new->right = NULL;
		new->n = value;
	}
	else
	{
		new->parent = parent;
		new->left = parent->left;
		parent->left->parent = new;
		parent->left = new;
		new->right = NULL;
		new->n = value;
	}
	return (new);
}
