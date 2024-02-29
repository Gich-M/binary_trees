#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 *
 * Return: 0 if tree is NULL.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: 0 If tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (tree == NULL)
		return (0);

	lh = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	rh = tree->right ? 1 + binary_tree_height(tree->right) : 1;
	return (lh > rh ? lh : rh);
}