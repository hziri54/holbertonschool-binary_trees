#include "binary_trees.h"

/**
 * binary_tree_insert_right - fonction qui insère un noeud en tant que
 * l'enfant à droite d'un autre noeud
 *
 * @parent : pointeur sur le parent.
 * @value : valeur à insérer dans le nouveau noeud.
 *
 * Return : un pointeur sur le nouveau noeud ou null s'il n'existe pas.
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
