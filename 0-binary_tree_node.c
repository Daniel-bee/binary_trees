#include"binary_trees.h"
/**
 *binary_tree_node - creates a binary tree node
 *@parent: pointer to the parent node of the node to create
 *@value: is the value to put in the new node
 *Return: binary_tree_t
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = NULL;

	tmp = malloc(sizeof(binary_tree_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = value;
	tmp->parent = parent;
	tmp->left = NULL;
	tmp->right = NULL;

	return (tmp);
}
