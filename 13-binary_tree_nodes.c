#include "binary_trees.h"

/**
 * binary_tree_nodes - fonction qui compte les noeuds ayant
 * au moins 1 enfant dans un arbre binaire
 *
 * @tree : pointeur sur le noeud racine de l'arbre pour compter le nombre de noeuds
 *
 * Retour : si l'arbre est NULL, retournez 0, sinon comptez le nombre de noeuds.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t child = 0;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (0);

	child = binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left) + 1;

	return (child);
}
