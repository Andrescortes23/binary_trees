#include "binary_trees.h"
/**
 *binary_tree_height - measures the height of a binary tree
 *@tree: binary tree to measure
 *Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightleft = 0, heightright = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		heightleft = binary_tree_height(tree->left) + 1;

	if (tree->right)
		heightright = binary_tree_height(tree->right) + 1;

	if (heightleft > heightright)
		return (heightleft);
	else
		return (heightright);
}
