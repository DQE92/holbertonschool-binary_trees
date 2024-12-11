#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	size_t height = binary_tree_height(tree);
	size_t expected_nodes = (1 << height) - 1;
	size_t actual_nodes = binary_tree_size(tree);

	return (actual_nodes == expected_nodes);
}
