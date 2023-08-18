#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks to see if every the binary tree is perfect
 *
 * @tree: pointer to root of binary tree
 *
 * Return: Returns 1 if perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leftCheck = 1, rightCheck = 1;

	if (tree == NULL)
		return (0);

	if ((tree->left && !tree->right) || (tree->right && !tree->left))
		return (0);

	if (tree->left)
		leftCheck = binary_tree_is_perfect(tree->left);

	if (tree->right)
		rightCheck = binary_tree_is_perfect(tree->right);

	if (!tree->right && !tree->left && !tree->parent)
		return (1);

	if (!tree->right && !tree->left)
		return (2);

	if (rightCheck == leftCheck)
		return (1);

	if (leftCheck == 0 || rightCheck == 0 || leftCheck != rightCheck)
		return (0);

	else
		return (1);
}
