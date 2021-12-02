#include "binary_trees.h"
/**
* binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
* @tree: pointer to the root node of the tree to count the number of nodes
* Return: size_t
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_tright, left;

	if (tree == NULL)
		return (0);

	if (tree->right || tree->left)
	{
		left = binary_tree_nodes(tree->left) + 1;
		right = binary_tree_nodes(tree->right) + 1;
		return (left + right - 1);
	}
	return (0);
}
