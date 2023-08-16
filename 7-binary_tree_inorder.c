#include "binary_trees.h"

/**
 * binary_tree_inorder - Orders binary tree from least to greatest value
 *
 * @tree: pointer to root of binary tree
 * @func: function pointer to function to do on each piece of tree
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->left)
		binary_tree_inorder(tree->left, func);

	func(tree->n);

	if (tree->right)
		binary_tree_inorder(tree->right, func);

}
