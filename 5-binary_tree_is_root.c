#include "binary_trees.h"

/**
 * binary_tree_is_root - fonction qui vérifie si un noeud est une racine
 *
 * @node : est un pointeur sur le nœud à vérifier.
 *
 * Retour : 1 si le noeud est une racine, sinon 0.
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
	{
		return (0);
	}
	return (1);
}
