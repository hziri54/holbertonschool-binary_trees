#include "binary_trees.h"

/**
 * binary_tree_balance - Mesure le facteur d'équilibre d'un arbre binaire.
 *
 * @tree: Pointeur vers le nœud racine de l'arbre à mesurer.
 *
 * Return: Si l'arbre est NULL,retourne 0 Sinon retourne le facteur d'équilibr
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Mesure la hauteur d'un arbre binaire.
 *
 * @tree: Pointeur vers le nœud racine pour mesurer la hauteur.
 *
 * Return:Si l'arbre est NULL, retourne 0 Sinon retourne la hauteur de l'arbre.
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
