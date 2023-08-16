#include "binary_trees.h"

/**
 * binary_tree_is_root - Determines if top of binary tree
 *
 * @node: pointer to node to check if top
 *
 * Return: Returns 1 if root, or 0 if not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node->parent)
		return (1);

	else
		return(0);
}
