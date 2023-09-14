#include <stdio.h>

// Challenge 6 : vérifier si le nombre donné est positif, négatif ou nul.
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 ==== Challenge 6 : vérifier si le nombre donné est positif, négatif ou nul ======\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{

    premierFonction();
    int a;

    printf("ecrivez le nomber a : ");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("le nombre est positif  \n");
    }
    else if (a < 0)
    {
         printf("le nombre est négatif  \n");

    }else{
        printf("le nombre est nul  \n");
    }

    return 0;
}
