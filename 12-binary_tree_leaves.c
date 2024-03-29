#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the tree to count number of leaves
 * Return: 0 if tree is NULL, count if otherwise
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_count1, leaf_count2;

	if (!tree)
		return (0);

	leaf_count1 = binary_tree_leaves(tree->left);
	leaf_count2 = binary_tree_leaves(tree->right);

	if (!tree->right && !tree->left)
		return (leaf_count1 + leaf_count2 + 1);
	else
		return (leaf_count1 + leaf_count2 + 0);
}
