#include "binary_trees.h"
/**
* binary_tree_balance - Measures the balance factor of a binary tree.
* @tree: A pointer to the root node of the tree to measure the balance factor.
*
* Return: The balance factor of the binary tree. If tree is NULL, return 0.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int L_h, R_h;

	if (tree == NULL)
	{
		return (0);
	}

	L_h = binary_tree_height(tree->left);

	R_h = binary_tree_height(tree->right);

	return (L_h - R_h);
}

/**
* binary_tree_height - Measures the height of a binary tree.
*
* @tree: A pointer to the root node of the tree to measure the height.
*
* Return: The height of the binary tree. If tree is NULL, return 0.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_h = 0, r_h = 0;

	if (tree == NULL)
	{
		return (0);
	}

	l_h = binary_tree_height(tree->left);
	r_h = binary_tree_height(tree->right);

	if (l_h > r_h)
	{
		return (l_h + 1);
	}

	else
		return (r_h + 1);
}
