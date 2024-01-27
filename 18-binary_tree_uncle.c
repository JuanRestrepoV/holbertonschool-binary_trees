#include "binary_trees.h"
/**
* binary_tree_uncle - Finds the uncle of a given node in a binary tree.
*
* @node: A pointer to the node for which to find the uncle.
*
* Return: A pointer to the uncle node.
*         If @node is NULL or has no uncle, return NULL.
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	
	if (node->parent->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->parent->left && node->parent->parent->right)
	{
		if (node->parent->parent->left == node->parent)
		{
			return (node->parent->parent->right);
		}

		if (node->parent->parent->right == node->parent)
		{
			return (node->parent->parent->left);
		}
	}
	return (NULL);
}
