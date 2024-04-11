#include "binary_trees.h"

unsigned char is_leaf(const binary_tree_t *node);
size_t depth(const binary_tree_t *tree);
const binary_tree_t *get_leaf(const binary_tree_t *tree);
int is_perfect_recursive(const binary_tree_t *tree, size_t leaf_depth,
		size_t level);
int binary_tree_is_perfect(const binary_tree_t *tree);

/**
 * is_leaf - vérifier si un nœud est une feuille d'un arbre binaire.
 *
 * @node: ptr pour la vérification du nœud.
 *
 * Return: ...
 */
unsigned char is_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * depth - profondeur du nœud de l'arbre binaire
 *
 * @tree: ptr vers le nœud de mesure de la profondeur
 *
 * Return: ...
 */
size_t depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}

/**
 * get_leaf - renvoie une feuille d'un arbre binaire.
 *
 * @tree: ptr nœud racine pour trouver la feuille
 *
 * Return: ...
 */
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * is_perfect_recursive - vérifier que l'arbre binaire est parfait
 *
 * @tree: un ptr vers le nœud racine de l'arbre
 *
 * @leaf_depth: la profondeur d'une feuille dans l'arbre binaire.
 *
 * @level: niveau du nœud.
 *
 * Return: ...
 */
int is_perfect_recursive(const binary_tree_t *tree, size_t leaf_depth,
		size_t level)
{
	if (is_leaf(tree))
		return (level == leaf_depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
			is_perfect_recursive(tree->right, leaf_depth, level + 1));
}

/**
 * binary_tree_is_perfect - vérifier la perfection de l'arbre binaire
 *
 * @tree: Un ptr vers l'arbre du nœud racine à vérifier
 *
 * Return: ...
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}
