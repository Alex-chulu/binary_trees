#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child of another node
 *
 * @parent: pointer to the node to insert the left-child in
 * @value:  value to store in the new node
 *
 * Description - If parent already has a left-child, the new node must take its place, 
 * and the old left-child must be set as the left-child of the new node.
 *
 * Return: a pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node;

	if (!parent)
		return (NULL);

	new_left_node = malloc(sizeof(binary_tree_t));
	if (!new_left_node)
		return (NULL);

	new_left_node->n = value;
	new_left_node->parent = parent;
	new_left_node->right = NULL;
	new_left_node->left = parent->left;
	parent->left = new_left_node;
	if (new_left_node->left)
		new_left_node->left->parent = new_left_node;
	return (new_left_node);
}
