#include "binary_trees.h"

/**
 * binary_tree_sibling -  fonction qui trouve le frère ou la sœur d'un nœud
 *
 * @node: pointeur sur le nœud pour trouver le frère ou la sœur
 *
 * Return: pointeur sur le nœud frère ou NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	return (node->parent->left);
}
