#include "binary_trees.h"

/**
 * binary_tree_size - counts the total size of the binary tree
 *
 * @tree: pointer to root of binary tree
 *
 * Return: Returns size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	unsigned int totalSize = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		totalSize += binary_tree_size(tree->left);

	if (tree->right)
		totalSize += binary_tree_size(tree->right);

	return (totalSize + 1);
}
