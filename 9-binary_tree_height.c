#include "binary_trees.h"

/**
 * binary_tree_height - fonction qui mesure la hauteur d'un arbre binaire.
 * @tree : pointeur vers le noeud racine de l'arbre à mesurer la hauteur
 * Return: hauteur de l'arbre ou 0 si tree est NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	/**
	 * Initialisation des compteurs de hauteur
	 * pour les sous-arbres gauche et droit
	 */

	size_t count_l = 0, count_r = 0;

	/** Si l'arbre est NULL, on retourne 0 */
	if (tree == NULL)
		return (0);

	/** Si le noeud courant est une feuille (n'a pas d'enfants), on retourne 0 */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/** Appel récursif de la fonction sur le sous-arbre gauche */
	count_l = binary_tree_height(tree->left);

	/** Appel récursif de la fonction sur le sous-arbre droit */
	count_r = binary_tree_height(tree->right);

	/**
	 *  On retourne la hauteur maximale entre le sous-arbre
	 * gauche et le sous-arbre droit, plus 1 pour le noeud courant
	 */

	if (count_l >= count_r)
		return (count_l + 1);
	else
		return (count_r + 1);
}
