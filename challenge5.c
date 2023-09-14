#include <stdio.h>

// Challenge 5 : Programme guidé par menu pour convertir l'année
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 ========= Challenge 5 : Programme guidé par menu pour convertir l'année =========\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{
    //
    premierFonction();
    int anne;
    printf("Ecrivez annes : ");
    scanf("%d", &anne);

    if (anne % 2 != 0)
    {
        printf("Une année n'est pas une année bissextile \n");
    }
    else if (anne % 2 == 0)
    {
        if ((anne % 4 == 0 && anne % 100 != 0))
        {
            printf("année bissextile \n");
        }
        else if (anne % 100 == 0 && anne % 400 == 0)
        {
            printf("année bissextile \n");
        }
    }



    return 0;
}
