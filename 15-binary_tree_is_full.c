#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Structure pour les nœuds de l'arbre binaire
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Fonction pour créer un nouveau nœud
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Erreur lors de l'allocation de mémoire.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Fonction pour vérifier si l'arbre binaire est complet
bool isComplete(struct Node* root) {
    if (root == NULL)
        return true;

    // File pour le parcours en largeur
    struct Node** queue = (struct Node**)malloc(sizeof(struct Node*) * 1000);
    int front = -1, rear = -1;

    // Indicateur pour savoir si un nœud sans enfant a été rencontré
    bool noChild = false;

    // Ajouter la racine à la file
    queue[++rear] = root;

    // Parcourir les nœuds de l'arbre
    while (front != rear) {
        struct Node* temp = queue[++front];

        // Si on rencontre un nœud sans enfant après avoir rencontré un nœud avec un enfant,
        // alors l'arbre n'est pas complet
        if (temp->left == NULL && temp->right == NULL) {
            noChild = true;
        } else if (temp->left != NULL && temp->right != NULL) {
            // Si un nœud a deux enfants et qu'on a déjà rencontré un nœud sans enfant,
            // alors l'arbre n'est pas complet
            if (noChild)
                return false;
            // Ajouter les enfants du nœud à la file
            queue[++rear] = temp->left;
            queue[++rear] = temp->right;
        } else {
            // Si un nœud a un seul enfant, alors l'arbre n'est pas complet
            return false;
        }
    }

    return true;
}

int main() {
    // Créer un arbre binaire complet
    struct Node* completeTree = createNode(1);
    completeTree->left = createNode(2);
    completeTree->right = createNode(3);
    completeTree->left->left = createNode(4);
    completeTree->left->right = createNode(5);
    completeTree->right->left = createNode(6);
    completeTree->right->right = createNode(7);

    // Vérifier si l'arbre binaire complet est complet
    if (isComplete(completeTree))
        printf("L'arbre binaire est complet.\n");
    else
        printf("L'arbre binaire n'est pas complet.\n");

    // Créer un arbre binaire non complet
    struct Node* incompleteTree = createNode(1);
    incompleteTree->left = createNode(2);
    incompleteTree->right = createNode(3);
    incompleteTree->left->left = createNode(4);
    incompleteTree->left->right = createNode(5);
    incompleteTree->left->left->left = createNode(8);

    // Vérifier si l'arbre binaire incomplet est complet
    if (isComplete(incompleteTree))
        printf("L'arbre binaire est complet.\n");
    else
        printf("L'arbre binaire n'est pas complet.\n");

    return 0;
}
