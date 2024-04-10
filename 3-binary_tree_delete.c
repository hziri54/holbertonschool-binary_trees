#include "binary_trees.h"

/**
 * binary_tree_delete - fonction qui supprime un arbre binaire entier
 *
 * @tree: pointeur sur le nœud racine de l'arbre à supprimer.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);

		free(tree);
	}
}
