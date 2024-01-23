#include "binary_trees.h"
/**
* binary_tree_is_leaf - Checks if a node is a leaf.
*
* @node: A pointer to the node to check.
*
* Description: This function determines whether a given node is a leaf in a
* binary tree. A leaf node is a node that has no left or right child.
*
* Return: 1 if the node is a leaf, 0 otherwise. If node is NULL, return 0.
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (node == NULL)
	{
		return (0);
	}
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}

	return (0);
}
