#include "binary_trees.h"
/**
* binary_tree_delete - Deletes an entire binary tree.
*
* @tree: A pointer to the root of the binary tree.
*
* Description: This function recursively deletes each node in the binary tree
* and frees the memory associated with it. The deletion starts from the leaves
* and proceeds towards the root.
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
