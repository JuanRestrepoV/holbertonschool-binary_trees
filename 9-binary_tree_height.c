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
	size_t h;

	if (tree == NULL)
	{
		return (0);
	}

	h = 0;

	if (tree->left != NULL)
	{
		h++;
		binary_tree_height(tree->left);
	}

	if (tree->right != NULL)
	{
		h++;
		binary_tree_height(tree->right);
	}
	return (h);
}
