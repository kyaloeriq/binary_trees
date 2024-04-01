#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, otherwise NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (right_node == NULL)
		return (NULL);

	right_node->n = value;
	right_node->right = NULL;
	right_node->left = NULL;
	right_node->parent = parent;

	if (parent->right != NULL)
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
	}
	parent->right = right_node;
	return (right_node);
}
