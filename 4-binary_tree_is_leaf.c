#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Vérifie si un nœud est une feuille
 * @node: un pointeur vers le nœud à vérifier
 *
 * Return: 1 si le nœud est une feuille, 0 sinon
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
	{
		return (0);
	}
	return (1);
}
