#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a new node to the left of given parent
 *
 * @parent: pointer to parent of node to create
 * @value: integer value to store on tree
 *
 * Return: Returns pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *oldLeft, *newNode;

	if (parent == NULL)
		return (NULL);

	oldLeft = parent->left;

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);
	parent->left = newNode;

	newNode->left = oldLeft;
	if (oldLeft != NULL)
	{
		oldLeft->parent = newNode;
	}

	return (newNode);

}
