#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Determines if bottom of binary tree
 *
 * @node: pointer to node to check if bottom
 *
 * Return: Returns 1 if leaf, or 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (!node->right && !node->left)
		return (1);

	else
		return (0);
}
