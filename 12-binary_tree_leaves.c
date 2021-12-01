#include "binary_trees.h"
/**
* binary_tree_leaves - counts the leaves in a binary tree
* @tree: pointer to the root node of the tree to count the number of leaves
* Return: size_t
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t right, left, leaves;

	if (tree == NULL)
		return (0);

	if (!(tree->right) && !(tree->left))
		return (1);

	right = binary_tree_leaves(tree->left);
	left = binary_tree_leaves(tree->right);
	leaves = left + right;
	return (leaves);
}
