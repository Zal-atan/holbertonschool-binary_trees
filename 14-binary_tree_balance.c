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
	int leftHeight = 0, rightHeight = 0;

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


/**
 * binary_tree_balance - measures the balance of tree
 *
 * @tree: pointer to root of binary tree
 *
 * Return: Returns balance, + is left leaning, - is right leaning
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0, leftWeight = 0, rightWeight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		leftWeight += 1;
		leftWeight += binary_tree_height(tree->left);
	}

	if (tree->right)
	{
		rightWeight += 1;
		rightWeight += binary_tree_height(tree->right);
	}

	balance = (leftWeight - rightWeight);
	return (balance);
}
