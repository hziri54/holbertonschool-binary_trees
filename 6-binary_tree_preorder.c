#include "binary_trees.h"

/**
 * binary_tree_preorder - fonction qui parcourt
 * un arbre binaire en utilisant la traversée par ordre préalable.
 *
 * @tree : un pointeur sur le noeud racine de l'arbre à parcourir.
 * @func : un pointeur vers une fonction à appeler pour chaque noeud.
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
