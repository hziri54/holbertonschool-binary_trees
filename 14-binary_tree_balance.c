#include "binary_trees.h"

/**
 * binary_tree_balance - mesure la hauteur d'un arbre binaire
 *
 * @tree : ptr
 *
 * Return : ...
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
/**
 * binary_tree_height - fonction qui mesure la hauteur d'un arbre binaire
 *
 * @tree : pointeur sur le noeud racine pour mesurer la hauteur
 *
 * Retour : si l'arbre est NULL, retournez 0, sinon retournez la hauteur de l'arbre.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
