#include "binary_trees.h"
/**
* binary_tree_insert_left - Inserts a node as the left-child of another node
* @parent: Pointer to the node to insert the left-child in
* @value: The value to store in the new node
*
* Description: This function inserts a new node with the given value
* as the left-child of the specified parent node in a binary tree.
* If the parent already has a left-child, the new node takes its place,
* and the old left-child becomes the left-child of the new node.
*
* Return: A pointer to the created node, NULL on failure or if parent is NULL.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *old_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;
	new_node->n = value;

	old_node = parent->left;
	parent->left = new_node;

	if (old_node != NULL)
	{
		new_node->left = old_node;
		old_node->parent = new_node;
	}
	return (new_node);
}
