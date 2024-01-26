#include "binary_trees.h"
/**
* binary_tree_sibling - Finds the sibling of a given node in a binary tree.
*
* @node: A pointer to the node for which to find the sibling.
*
* Return: A pointer to the sibling node.
* If @node is NULL or has no sibling, or if the parent is NULL, return NULL.
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->left && node->parent->right)
	{
		if (node->parent->left == node)
		{
			return (node->parent->right);
		}

		if (node->parent->right == node)
		{
			return (node->parent->left);
		}
	}
	return (NULL);
}
