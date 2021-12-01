#include "binary_trees.h"
/**
 *binary_tree_insert_right - inserts a node as the right-child of another node
 *@parent: pointer to the node to insert the right-child
 *@value: value to store in the new node
 *Return: binary_tree_t
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
{
	binary_tree_t *tmp;

	if (parent == NULL)
		return (NULL);
	tmp = malloc(sizeof(binary_tree_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = value;
	tmp->parent = parent;
	tmp->right = NULL;
	tmp->left = NULL;
	if (parent->right == NULL)
	{
		parent->right = tmp;
	}
	else
	{
		tmp->right = parent->right;
		parent->right->parent = tmp;
		parent->right = tmp;
	}

	return (tmp);
}
