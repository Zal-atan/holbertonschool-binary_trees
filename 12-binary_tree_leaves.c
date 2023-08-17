#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the total leaves of given binary tree
 *
 * @tree: pointer to root of binary tree
 *
 * Return: Returns number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	unsigned int totalLeaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		totalLeaves += binary_tree_leaves(tree->left);

	if (tree->right)
		totalLeaves += binary_tree_leaves(tree->right);

	if (!tree->right && !tree->left)
		return (totalLeaves + 1);

	else
		return (totalLeaves);
}
