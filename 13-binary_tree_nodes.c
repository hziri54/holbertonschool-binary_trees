#include "binary_trees.h"

/**
 * binary_tree_nodes - Fonction qui compte les noeuds ayant au moins un enfant
 * dans un arbre binaire.
 *
 * @tree: Pointeur vers le noeud racine de l'arbre.
 *
 * Return: Si l'arbre est NULL, retourne 0. Sinon, retourne le nombre de noeud
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t child;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (0);

	child = binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left) + 1;

	return (child);
}
