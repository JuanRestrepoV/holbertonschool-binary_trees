#include "binary_trees.h"
/**
* binary_tree_node - function that creates a binary tree node
* @parent: is a pointer to the parent node of the node to create.
* @value: is the value to put in the new node.
*
* Return: binary tree type.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *result;

	result = malloc(sizeof(binary_tree_t));

	if (result != NULL)
	{
		result->left = NULL;
		result->right = NULL;
		result->n = value;
		result->parent = parent;
		return (result);
	}
	return (NULL);
}
