#include "binary_trees.h"
/**
 *binary_tree_insert_right - inser new node to right
 *@parent: parent of ne node
 *@value: number inside new node
 *Return: new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = new;
	}
	else
	{
		parent->right->parent = new;
		new->right = parent->right;
		parent->right = new;
	}
	return (new);
}
