#include "binary_trees.h"
/**
* binary_tree_height - Measures the height of a binary tree.
*
* @tree: A pointer to the root node of the tree to measure the height.
*
* Return: The height of the binary tree. If tree is NULL, return 0.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = 0;
	right_height = 0;

	if (tree->left != NULL)
	{
		left_height++;
		binary_tree_height(tree->left);
	}

	if (tree->right != NULL)
	{
		right_height++;
		binary_tree_height(tree->right);
	}

	if (left_height > right_height)
		return (left_height);

	if (left_height < right_height)
		return (right_height);

	if (left_height == right_height)
	{
		return (left_height + right_height);
	}
	return (0);
}
