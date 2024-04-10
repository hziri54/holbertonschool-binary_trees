#include "binary_trees.h"

/**
 * binary_tree_node - fonction qui crée un nœud d'arbre binaire
 *
 * @parent : pointeur sur le nœud parent du nœud à créer
 *
 * @value : la valeur à mettre dans le nouveau noeud.
 *
 * Retour : NULL en cas d'erreur ou pointeur sur le nouveau noeud.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
