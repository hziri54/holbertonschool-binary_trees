#include "binary_trees.h"

/**
 * binary_tree_is_full - Fonction qui vérifie si un arbre binaire est complet.
 * @tree: Pointeur vers la racine de l'arbre à vérifier.
 *
 * Return: 1 si l'arbre est complet, sinon 0.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
