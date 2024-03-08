#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @node: Pointer to the node to find the uncle
 *
 * Return: A pointer to the uncle node
 * If node is NULL, return NULL
 * If node has no uncle, return NULL
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	return (node->parent->parent->left == node->parent ?
			node->parent->parent->right : node->parent->parent->left);
}

