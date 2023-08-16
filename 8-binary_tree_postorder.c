#include "binary_trees.h"

/**
 * binary_tree_postorder - Orders binary tree in post order
 *
 * @tree: pointer to root of binary tree
 * @func: function pointer to function to do on each piece of tree
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->left)
		binary_tree_postorder(tree->left, func);


	if (tree->right)
		binary_tree_postorder(tree->right, func);

	func(tree->n);
}
