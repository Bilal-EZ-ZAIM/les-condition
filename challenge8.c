#include <stdio.h>

// Challenge 8 : fonction de la moyenne de ses notes.
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 ========= Challenge 8 : fonction de la moyenne de ses notes. =========\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{
    //
    premierFonction();
    float moyenne;
    printf("ecrevez la moyenne : ");
    scanf("%f", &moyenne);
    if (moyenne < 10)
    {
        printf("recalé\n");
    }
    else if (moyenne > 10 && moyenne <= 12)
    {
        printf("passable\n");
    }
    else if (moyenne > 12 && moyenne <= 14)
    {
        printf("la mention assez bien\n");
    }
    else if (moyenne > 14 && moyenne <= 16)
    {
        printf("la mention bien\n");
    }
    else if (moyenne > 16 && moyenne <= 20)
    {
        printf("la mention très bien\n");
    }

    return 0;
}
