#include "binary_trees.h"

/**
 * binary_tree_uncle - Checks for uncle node on the tree
 *
 * @node: pointer to node on binary tree
 *
 * Return: Returns pointer to uncle node, or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	int temp;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);
	temp = node->parent->n;

	if (node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == NULL ||
	node->parent->parent->right == NULL)
		return (NULL);

	if (node->parent->parent->left->n == temp)
		return (node->parent->right);

	else
		return (node->parent->parent->left);
}
