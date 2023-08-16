#include "binary_trees.h"

/**
 * binary_tree_preorder - Orders binary tree from top, then left to right
 *
 * @tree: pointer to root of binary tree
 * @func: function pointer to function to do on each piece of tree
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	if (tree->left)
		binary_tree_preorder(tree->left, func);

	if (tree->right)
		binary_tree_preorder(tree->right, func);
}
