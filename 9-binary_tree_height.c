#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: the height of a binary tree, If tree is NULL return 0.
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int lDepth, rDepth;

	if (tree == NULL)
		return (0);

	lDepth = binary_tree_height(tree->left);
	rDepth = binary_tree_height(tree->right);

	if (lDepth > rDepth)
		return (lDepth + 1);
	else
		return (rDepth + 1);
}
