
#include "binary_trees.h"

/**
 * binary_tree_inorder - fonction qui parcourt
 * un arbre binaire en utilisant la traversée dans l'ordre
 * @tree : pointeur sur le noeud racine de l'arbre à parcourir
 * @func : pointeur sur un appel de fonction pour chaque noeud
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/** Si l'arbre ou la fonction de rappel sont NULL, on ne fait rien */
	if (tree == NULL || func == NULL)
		return;

	/** On appelle récursivement la fonction sur le sous-arbre gauche */
	binary_tree_inorder(tree->left, func);

	/** On appelle la fonction de rappel avec la valeur du noeud courant */
	(func)(tree->n);

	/** On appelle récursivement la fonction sur le sous-arbre droit */
	binary_tree_inorder(tree->right, func);
}
