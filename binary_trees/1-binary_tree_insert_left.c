#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node.
 * @parent: Pointer to the node to inser the left child in.
 * @value: value to store in the node.
 * Return: Pointer to the created node.
 *	Otherwise if parent is NULL/ or on failure - NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;
	new_node->right = NULL;

	/**
	 * If parent already has a left-child, the new node must take its place,
	 * and the old left-child must be set as the left-child of the new node.
	 **/
	if (parent->left != NULL)
	{
		parent->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
