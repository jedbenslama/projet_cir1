#include <stdio.h>
#include "cartes.h"

char suspects[NB_SUSPECTS][50] = {
    "Victor Noir",
    "Clara Rouge",
    "Hugo Morel",
    "Emma Frost",
    "Lucas Vane",
    "Sarah Blake"
};

char armes[NB_ARMES][50] = {
    "Revolver",
    "Corde",
    "Poison",
    "Couteau",
    "Chandelier",
    "Cle anglaise"
};

char pieces[NB_PIECES][50] = {
    "Cuisine",
    "Bibliotheque",
    "Salon",
    "Bureau",
    "Cave",
    "Jardin d'hiver"
};

void afficherSuspects()
{
    int i;

    printf("\nSuspects :\n\n");

    for(i = 0; i < NB_SUSPECTS; i++)
    {
        printf("%d - %s\n", i + 1, suspects[i]);
    }
}

void afficherArmes()
{
    int i;

    printf("\nArmes :\n\n");

    for(i = 0; i < NB_ARMES; i++)
    {
        printf("%d - %s\n", i + 1, armes[i]);
    }
}

void afficherPieces()
{
    int i;

    printf("\nPieces :\n\n");

    for(i = 0; i < NB_PIECES; i++)
    {
        printf("%d - %s\n", i + 1, pieces[i]);
    }
}