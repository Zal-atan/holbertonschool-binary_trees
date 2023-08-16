#include "binary_trees.h"

/**
 * binary_tree_height - counts height from specific node
 *
 * @tree: pointer to root of binary tree
 *
 * Return: Returns size of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	unsigned int height = 0;

	if (tree == NULL)
		return (0);

	if (!tree->right && !tree->left)
		return (height);

	if (tree->parent != NULL)
		height += 1;

	if (tree->left)
		height += binary_tree_height(tree->left);


	if (tree->right)
		height += binary_tree_height(tree->right);

	return (height);
}
