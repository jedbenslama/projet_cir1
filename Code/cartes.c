#include <stdio.h>
#include "cartes.h"

void afficherSuspects(char suspects[6][50])
{
    int i;

    printf("\nSuspects :\n\n");

    for(i = 0; i < 6; i++)
    {
        printf("%d - %s\n", i + 1, suspects[i]);
    }
}

void afficherArmes(char armes[6][50])
{
    int i;

    printf("\nArmes :\n\n");

    for(i = 0; i < 6; i++)
    {
        printf("%d - %s\n", i + 1, armes[i]);
    }
}

void afficherPieces(char pieces[6][50])
{
    int i;

    printf("\nPieces :\n\n");

    for(i = 0; i < 6; i++)
    {
        printf("%d - %s\n", i + 1, pieces[i]);
    }
}