#include "binary_trees.h"
/**
 *binary_tree_nodes - counts the nodes with at least 1 child
 *@tree: root node
 *Return: num of nodes with childs
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t cntr = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		cntr += binary_tree_nodes(tree->left);
	if (tree->right)
		cntr += binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		return (cntr + 1);
	else
		return (cntr);
}
