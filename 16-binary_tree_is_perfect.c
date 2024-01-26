#include "binary_trees.h"
/**
* binary_tree_is_perfect - Checks if a binary tree is perfect.
*
* @tree: A pointer to the root node of the binary tree to check.
*
* Return: 1 if the binary tree is perfect, 0 otherwise.
*         If tree is NULL, the function returns 0.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int L_t, R_t;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	L_t = binary_tree_height(tree->left);
	R_t = binary_tree_height(tree->right);

	if (L_t == R_t)
	{
		if (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right))
		{
			return (1);
		}
	}
	return (0);
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

	if (tree == NULL || (tree->left == 0 && tree->right == 0))
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
