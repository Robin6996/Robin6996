#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void afficherAide() {
    printf("\n==== Aide du Jeu Quoridor ====");
    printf("\n1. Le but du jeu est d\'amener votre pion sur la ligne oppos\xe9e du plateau.\n");
    printf("2. Chaque joueur peut soit avancer son pion soit poser un mur pour bloquer l\'adversaire.\n");
    printf("3. Les murs ne peuvent pas bloquer complètement le chemin de l\'adversaire.\n");
    printf("4. Le premier joueur à atteindre la ligne opposée gagne la partie.\n\n");
}

void afficherScores() {
    printf("\n==== Scores des Joueurs ====");
    printf("\n- Joueur 1 : 10 victoires\n");
    printf("- Joueur 2 : 8 victoires\n");
    printf("\nRetour au menu principal...\n\n");
}

void nouvellePartie() {
    printf("\n==== Nouvelle Partie ====");
    printf("\nChargement de la nouvelle partie...\n\n");
    // Ajouter la logique pour lancer une nouvelle partie
}

void reprendrePartie() {
    printf("\n==== Reprise de Partie ====");
    printf("\nChargement de la partie sauvegardée...\n\n");
    // Ajouter la logique pour reprendre une partie sauvegardée
}

int main() {
    int choix;
    bool quitter = false;

    while (!quitter) {
        printf("\n==== Quoridor ====");
        printf("\n====  Menu   ====");
        printf("\n1. Lancer une nouvelle partie");
        printf("\n2. Reprendre une partie sauvegardée");
        printf("\n3. Afficher l'aide");
        printf("\n4. Afficher les scores des joueurs");
        printf("\n5. Quitter le jeu\n");
        printf("\nVotre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                nouvellePartie();
                break;
            case 2:
                reprendrePartie();
                break;
            case 3:
                afficherAide();
                break;
            case 4:
                afficherScores();
                break;
            case 5:
                printf("\nMerci d'avoir joué à Quoridor. À bientôt !\n");
                quitter = true;
                break;
            default:
                printf("\nChoix invalide. Veuillez réessayer.\n");
                break;
        }
    }

    return 0;
}
