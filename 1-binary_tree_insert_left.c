#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, otherwise NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
        binary_tree_t *left_node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

        if (left_node == NULL)
                return (NULL);

        left_node->n = value;
        left_node->left = NULL;
	left_node->right = NULL;
	left_node->parent = parent;

	if (parent->left != NULL)
	{
		left_node->left = parent->left;
		parent->left->parent = left_node;
	}
	parent->left = left_node;
        return (left_node);
}
