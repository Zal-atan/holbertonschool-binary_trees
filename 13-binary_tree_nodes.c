#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the total nodes of given binary tree
 *
 * @tree: pointer to root of binary tree
 *
 * Return: Returns number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	unsigned int totalNodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		totalNodes += binary_tree_nodes(tree->left);

	if (tree->right)
		totalNodes += binary_tree_nodes(tree->right);

	if (!tree->right && !tree->left)
		return (totalNodes);

	else
		return (totalNodes + 1);
}
