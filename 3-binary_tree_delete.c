#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a new node to the right of given parent
 *
 * @parent: pointer to parent of node to create
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->right != NULL)
		binary_tree_delete(tree->right);

	if (tree->left != NULL)
		binary_tree_delete(tree->left);

	free(tree);
}
