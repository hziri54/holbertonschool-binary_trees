#include "binary_trees.h"

/**
 * binary_tree_is_leaf - fonction qui vérifie si un noeud est une feuille
 *
 * @node : est un pointeur sur le nœud à vérifier.
 *
 * Retour : 1 si le noeud est une feuille, sinon 0.
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
	{
		return (0);
	}
	return (1);
}
