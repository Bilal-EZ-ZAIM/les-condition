#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// les condition
// Challenge 11 : Programme guidé par menu pour convertir l'année
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 === Challenge 11 : affiche d'une manière aléatoire un des jours de la semaine ===\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{
    //
    premierFonction();
    srand(time(NULL));
    int jour = (rand() % 7) + 1;

    switch (jour)
    {
    case 1:
        printf("Dimanche");
        break;
    case 2:
        printf("Lundi");
        break;
    case 3:
        printf("Mardi");
        break;
    case 4:
        printf("Mercredi");
        break;
    case 5:
        printf("Jeudi");
        break;
    case 6:
        printf("Vendredi");
        break;
    case 7:
        printf("Samedi");
        break;

    default:
        printf("un nimiro entre 1 et 7 ");
        break;
    }

    return 0;
}
