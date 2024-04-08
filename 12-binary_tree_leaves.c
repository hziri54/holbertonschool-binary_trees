#include "binary_trees.h"

/**
 * binary_tree_leaves - fonction qui compte le
 * nombre de feuilles dans un arbre binaire
 * @tree : pointeur vers la racine de l'arbre à compter
 * Return: retourne le nombre de feuilles dans l'arbre ou 0 si tree est NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/** Si l'arbre est NULL, on retourne 0 */
	if (tree == NULL)
		return (0);

	/** Si le nœud courant est une feuille (n'a pas d'enfants), on retourne 1 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/**
	 * On appelle récursivement la fonction sur le sous-arbre
	 * gauche et le sous-arbre droit, et on additionne les résultats
	 */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
