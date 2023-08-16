#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a new node to the right of given parent
 *
 * @parent: pointer to parent of node to create
 * @value: integer value to store on tree
 *
 * Return: Returns pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *oldRight, *newNode;

	if (parent == NULL)
		return (NULL);

	oldRight = parent->right;

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);
	parent->right = newNode;

	newNode->right = oldRight;
	if (oldRight != NULL)
	{
		oldRight->parent = newNode;
	}

	return (newNode);

}
