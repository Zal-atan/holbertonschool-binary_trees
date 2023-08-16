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
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);
	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);

	newNode->parent = parent;
	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		newNode->left->parent = newNode;
	}
	parent->left = newNode;
	newNode->right = NULL;
	newNode->n = value;

	return (newNode);

}
