#include "binary_trees.h"
/**
* binary_tree_postorder - Goes through a binary tree using post-order traversal.
*
* @tree: A pointer to the root node of the tree to traverse.
* @func: A pointer to the function to call for each node.
*
* Description: This function traverses a binary tree using post-order traversal.
* It applies a given function to each visited node, passing the value in the node
* as a parameter to the function. If either tree or func is NULL, do nothing.
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	if (tree->left != NULL)
	{
		binary_tree_postorder(tree->left, func);
	}

	if (tree->right != NULL)
	{
		binary_tree_postorder(tree->right, func);
	}

	func(tree->n);
}
