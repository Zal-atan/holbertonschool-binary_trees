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
		leftWeight += binary_tree_nodes(tree->left);
		leftWeight += binary_tree_leaves(tree->left);
	}

	if (tree->right)
	{
		rightWeight += binary_tree_nodes(tree->right);
		rightWeight += binary_tree_leaves(tree->right);
	}

	balance = (leftWeight - rightWeight);
	return (balance);
}
