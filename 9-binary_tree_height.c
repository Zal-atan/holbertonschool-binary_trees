#include "binary_trees.h"

/**
 * binary_tree_height_left - counts height to the left from specific node
 *
 * @tree: pointer to root of binary tree
 *
 * Return: Returns size of tree
 */
/*size_t binary_tree_height(const binary_tree_t *tree, unsigned int height)
{

	if (tree == NULL)
		return (0);

	if (!tree->right && !tree->left)
		return (leftHeight);

	if (tree->left)
		height += binary_tree_height(tree->left);

	if (tree->right)
		height += binary_tree_height(tree->right);

	return (height);
} */

/**
 * binary_tree_height_right - counts height to the right from specific node
 *
 * @tree: pointer to root of binary tree
 *
 * Return: Returns size of tree
 */
/*size_t binary_tree_height(const binary_tree_t *tree, unsigned int height)
{

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
} */


/**
 * binary_tree_height - counts height from specific node
 *
 * @tree: pointer to root of binary tree
 *
 * Return: Returns size of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	unsigned int leftHeight = 0, rightHeight = 0;

	if (tree == NULL)
		return (0);

	if (!tree->right && !tree->left)
		return (0);

	if (tree->left)
	{
		leftHeight += 1;
		leftHeight += binary_tree_height(tree->left);
	}

	if (tree->right)
	{
		rightHeight += 1;
		rightHeight += binary_tree_height(tree->right);
	}

	if (leftHeight > rightHeight)
		return (leftHeight);

	else
		return (rightHeight);
}
