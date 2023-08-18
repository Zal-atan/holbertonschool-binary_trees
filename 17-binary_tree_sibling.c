#include "binary_trees.h"

/**
 * binary_tree_sibling - Checks for sibling node on the tree
 *
 * @node: pointer to node on binary tree
 *
 * Return: Returns pointer to sibling node, or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int temp;

	if (node == NULL)
		return (NULL);

	temp = node->n;

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);

	if (node->parent->left->n == temp)
		return (node->parent->right);

	else
		return (node->parent->left);
}
