
#include "binary_trees.h"

/**
 * binary_tree_depth - fonction qui mesure la
 * profondeur d'un noeud dans un arbre binaire
 * @tree : pointeur vers le noeud dont on veut mesurer la profondeur
 * Return: la profondeur du noeud dans l'arbre ou 0 si tree est NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	/** Si l'arbre est NULL, on retourne 0 */
	if (tree == NULL)
		return (0);

	/** Si le noeud courant est la racine, on retourne 0 */
	if (tree->parent == NULL)
		return (0);

	/**
	 * On appelle récursivement la fonction
	 * sur le parent du noeud courant, et on ajoute 1
	 * pour le noeud courant
	 */
	return (binary_tree_depth(tree->parent) + 1);
}
