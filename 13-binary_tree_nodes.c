#include "binary_trees.h"
/**
* binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
*
* @tree: A pointer to the root node of the binary tree.
*
* Return: The number of nodes with at least 1 child in the binary tree.
* If @tree is NULL, return 0. A NULL pointer is not considered a node.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t L_nodes, R_nodes;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	L_nodes = binary_tree_nodes(tree->left);
	R_nodes = binary_tree_nodes(tree->right);

	return (1 + L_nodes + R_nodes);
}
