#include "binary_trees.h"
/**
 *binary_tree_insert_right - inserts a node as the right child
 *@parent: pointer to the parent node
 *@value: node's integer
 *Return: new node or NULL if failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		new->parent = parent;
		parent->right = new;
		new->left = NULL;
		new->right = NULL;
		new->n = value;
	}
	else
	{
		new->parent = parent;
		new->right = parent->right;
		parent->right = new;
		new->left = NULL;
		new->n = value;
	}
	return (new);
}
