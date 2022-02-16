#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as left-child
 *				of another node.
 * @parent: is a pointer to the node to insert the left-child
 * @value: is the value to store in the new node
 * Return: a pointer or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)

{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = value;
	newnode->parent = parent;
	newnode->right = NULL;
	newnode->left = parent->left;
	parent->left = newnode;
	if (newnode->left)
		newnode->left->parent = newnode;
	return (newnode);
}
