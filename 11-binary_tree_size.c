#include "binary_trees.h"

/**
 * binary_tree_size - Calcule la taille d'un arbre binaire
 * @tree : Pointeur vers la racine de l'arbre à mesurer
 * Return : Taille de l'arbre binaire ou 0 si tree est NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	/** Si l'arbre est NULL, on retourne 0*/
	if (tree == NULL)
		return (0);

	/**
	 * On appelle récursivement la fonction sur le sous-arbre gauche
	 * et le sous-arbre droit, et on ajoute 1 pour le nœud courant
	 */
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
