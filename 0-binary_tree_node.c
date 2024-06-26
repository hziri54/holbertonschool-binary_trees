#include "binary_trees.h"

/**
 * binary_tree_node - Crée un nouveau nœud d'arbre binaire
 * @parent: pointeur vers le nœud parent du nœud à créer
 * @value: la valeur à mettre dans le nouveau nœud
 *
 * Return: pointeur vers le nouveau nœud en
 * cas de succès, NULL en cas d'échec
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
