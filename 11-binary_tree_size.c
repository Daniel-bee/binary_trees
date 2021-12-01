#include "binary_trees.h"
/**
* binary_tree_size - measures the size of a binary tree
* @tree: pointer to the root node of the tree to measure the size
* Return: size_t
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right, left;

	if (tree == NULL)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);
	left = binary_tree_size(tree->left);
	left++;
	right = binary_tree_size(tree->right);
	right++;

	return (right + left - 1);
}
