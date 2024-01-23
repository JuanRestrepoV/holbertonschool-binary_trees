#include "binary_trees.h"
/**
* binary_tree_is_root - Checks if a node is a root.
*
* @node: A pointer to the node to check.
*
* Description: This function determines whether a given node is a root in a
* binary tree. A root node is a node that has no parent.
*
* Return: 1 if the node is a root, 0 otherwise. If node is NULL, return 0.
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->parent == NULL)
	{
		return (1);
	}

	return (0);
}
