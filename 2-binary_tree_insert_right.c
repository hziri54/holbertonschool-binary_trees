#include "binary_trees.h"

/**
 * binary_tree_insert_right - nsère un nœud comme enfant droit d'un aut
 *
 * @parent: Pointeur vers le parent.
 * @value: Valeur à insérer dans le nouveauoeud.
 *
 * Return:Retourne un pointeur vers le nouveau noeud ou NULL si absent
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
	{
		return (NULL);
	}

	new = binary_tree_node(parent, value);
	if (new == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
