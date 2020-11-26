#include "binary_trees.h"
/**
 *binary_tree_preorder - function to go through pre-order traversal
 *@tree: tree to traverse
 *@func: function to call
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	if (tree)
	{
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
