
#include "binary_trees.h"

/**
 * binary_tree_postorder - parcourt un arbre binaire
 * en utilisant un parcours dans l'ordre
 * @tree : un pointeur sur le noeud racine de l'arbre à parcourir
 * @func : un pointeur sur une fonction à appeler pour chaque noeud
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/** Si l'arbre ou la fonction de rappel sont NULL, on ne fait rien */
	if (tree == NULL || func == NULL)
		return;

	/** On appelle récursivement la fonction sur le sous-arbre gauche */
	binary_tree_postorder(tree->left, func);

	/** On appelle récursivement la fonction sur le sous-arbre droit*/
	binary_tree_postorder(tree->right, func);

	/** On appelle la fonction de rappel avec la valeur du noeud courant*/
	(func)(tree->n);
}
