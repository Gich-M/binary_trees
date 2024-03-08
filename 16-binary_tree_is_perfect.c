#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If the tree is perfect, 1. Otherwise, 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lh, rh;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	if (lh == rh &&
			binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right))
		return (1);
	return (0);
}

/**
 * binary_tree_height - Computes the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
		return (0);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);
	return ((lh > rh ? lh : rh) + 1);
}

