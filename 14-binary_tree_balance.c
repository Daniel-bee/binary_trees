#include "binary_trees.h"
/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: pointer to the root node of the tree to measure the balance factor
* Return: If tree is NULL, return 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0;
	unsigned int left_h, right_h;

	left_h = binary_tree_height(tree->left);
	left_h++;
	right_h = binary_tree_height(tree->right);
	right_h++;
	if (left_h > right_h)
		return (left_h);
	else
		return (right_h);

	if (tree == NULL)
		return (0);

	right = binary_tree_height(tree->right);
	left = binary_tree_height(tree->left);

	return (left - right);
}
