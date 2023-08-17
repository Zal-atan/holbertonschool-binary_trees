#include "binary_trees.h"

/**
 * binary_tree_is_full - checks to see if every node has 0 or 2 children
 *
 * @tree: pointer to root of binary tree
 *
 * Return: Returns 1 if full, 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int leftCheck = 1, rightCheck = 1;

	if (tree == NULL)
		return (0);

	if ((tree->left && !tree->right) || (tree->right && !tree->left))
		return (0);

	if (tree->left)
		leftCheck = binary_tree_is_full(tree->left);

	if (tree->right)
		rightCheck = binary_tree_is_full(tree->right);

	if (!tree->right && !tree->left)
		return (1);

	if (leftCheck == 0 || rightCheck == 0)
		return (0);

	else
		return (1);
}
