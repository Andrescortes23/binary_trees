#include "binary_trees.h"
/**
 *binary_tree_depth - measures the depth of node in a binary tree
 *@tree: node tu measure
 *Return: the deep
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t cntr = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
		cntr = size_t binary_tree_depth(tree->parent) + 1;
	else
		return (0);
	return (cntr);
}
