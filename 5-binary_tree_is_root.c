#include "binary_trees.h"

/**
 * binary_tree_is_root - Vérifie si un nœud est une racine.
 *
 * @node: Pointeur vers le nœud à vérifier.
 *
 * Return: Retourne 1 si le nœud est une racine, sinon 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
	{
		return (0);
	}
	return (1);
}
