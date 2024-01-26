#include "binary_trees.h"
/**
* binary_tree_is_full - Checks if a binary tree is full.
* @tree: A pointer to the root node of the tree to check.
*
* Return: 1 if the tree is full, 0 otherwise.
* If tree is NULL, return 0.
*/
int binary_tree_is_full(const binary_tree_t *tree)
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

	L_t = binary_tree_is_full(tree->left);
	R_t = binary_tree_is_full(tree->right);

	if (L_t == R_t)
	{
		return (1);
	}
	else
		return (0);
}
