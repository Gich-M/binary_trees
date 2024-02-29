#include "binary_trees.h"

/**
 * binary_tree_t - Creates a new node
 * @parent: Pointer to the parent node of the node to create
 * @value: The value to put in the new node
 *
 * Return: NULL on failure, Pointer to new node on success
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
