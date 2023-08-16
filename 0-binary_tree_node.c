#include "binary_trees.h"

/**
 * binary_tree_node - adds a new node to the binary tree
 *
 * @parent: pointer to parent of node to create
 * @value: integer value to store on tree
 *
 * Return: Returns pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;


	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);

	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->n = value;
	return (newNode);

}
