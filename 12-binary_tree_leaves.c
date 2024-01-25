#include "binary_trees.h"
/**
* binary_tree_leaves - Counts the number of leaves in a binary tree.
*
* @tree: A pointer to the root node of the binary tree.
*
* Return: The number of leaves in the binary tree. If @tree is NULL, return 0.
* A NULL pointer is not considered a leaf.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t L_leaves, R_leaves;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	L_leaves = binary_tree_leaves(tree->left);
	R_leaves = binary_tree_leaves(tree->right);

	return (L_leaves + R_leaves);
}
