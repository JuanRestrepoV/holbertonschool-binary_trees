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
		if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
		{
			return (1);
		}
	}
	return (0);
}
