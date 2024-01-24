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
	size_t height;

	if (tree == NULL)
	{
		return (0);
	}

	height = 0;

	if (tree->left != NULL)
	{
		height++;
		binary_tree_height(tree->left);
	}

	if (tree->right != NULL)
	{
		height++;
		binary_tree_height(tree->right);
	}
	return (height);
}
