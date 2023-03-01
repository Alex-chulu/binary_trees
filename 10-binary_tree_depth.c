#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: 0 if tree is NULL
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dpt = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		dpt++;
		tree = tree->parent;
	}

	return (dpt);
}
