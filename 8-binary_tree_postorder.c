#include "binary_trees.h"
/**
 *binary_tree_postorder - function to go through post-order traversal
 *@tree: tree to traverse
 *@func: funcion to call
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || func == NULL)
		return;

	if (tree)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
