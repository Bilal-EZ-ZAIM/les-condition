#include <stdio.h>

// Challenge 7 : le caractère donné est un alphabet majuscule.
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 ==== Challenge 7 : le caractère donné est un alphabet majuscule ======\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{

    premierFonction();
    char C ;
    
    printf("ecrivez le caractère : ");
    scanf("%c", &C);
    int x = (int)C;
    printf("%d" , x);
    if(x >= 65 && x <= 90){
        printf("le caractère donné est un alphabet majuscule : ");
    }else{
        printf("le caractère donné est un alphabet minuscul : ");
    }

    return 0;
}
