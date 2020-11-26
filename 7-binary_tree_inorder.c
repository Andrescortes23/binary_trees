#include "binary_trees.h"
/**
 *binary_tree_inorder - go through a binary tree using in-order traversal
 *@tree: tree to traverse
 *@func: function to call
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || func == NULL)
		return;

	func(tree->n);

	if (tree)
	{
		binary_tree_inorder(tree->left, func);
		binary_tree_inorder(tree->right, func);
	}
}
