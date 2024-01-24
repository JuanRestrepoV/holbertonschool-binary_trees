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
		binary_tree_height(tree->left);
		height++;
	}

	if (tree->right != NULL)
	{
		binary_tree_height(tree->right);
		height++;
	}
	return (height);
}
