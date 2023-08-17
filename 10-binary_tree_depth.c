#include "binary_trees.h"

/**
 * binary_tree_depth - counts depth from specific root
 *
 * @tree: pointer to root of binary tree
 *
 * Return: Returns size of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	unsigned int depth = 0;

	if (tree == NULL)
		return (0);

	if (!tree->parent)
		return (0);

	if (tree->parent)
	{
		depth += 1;
		depth += binary_tree_depth(tree->parent);
	}

	return (depth);
}
