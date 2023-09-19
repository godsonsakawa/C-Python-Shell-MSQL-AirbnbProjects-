#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - insert node to the right-child of another node.
 * @parent: Pointer to the node to inser the right child in.
 * @value: value to store in the node.
 * Return: Pointer to the created node.
 *	Otherwise if parent is NULL/ or on failure - NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = parent->right;
	new_node->left = NULL;

	/**
	 * If parent already has a right-child, the new node must take its place,
	 * and the old right-child must be set as the right-child of the new node.
	 **/
	if (parent->right != NULL)
	{
		parent->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
