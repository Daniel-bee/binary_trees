#include"binary_trees.h"
/**
 *binary_tree_insert_left - inserts a node as the left-child of another node
 *@parent: pointer to the node to insert the left-child
 *@value: value to store in the new node
 *Return: binary_tree_t
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (parent == NULL)
		return (NULL);

	tmp = binary_tree_node(parent, value);
	if (tmp == NULL)
		return (NULL);
	tmp->n = value;
	tmp->parent = parent;
	tmp->right = NULL;
	tmp->left = NULL;
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = tmp;
	}
	parent->left = tmp;

	return (tmp);
}
