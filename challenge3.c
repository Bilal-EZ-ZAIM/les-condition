#include <stdio.h>

// Challenge 3 : calculer la somme de deux valeurs 
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 ============== Challenge  : calculer la somme de deux valeurs ===================\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{
    premierFonction();
    int a , b , somme;
    printf("ecrivez le nomber a : ");
    scanf("%d" , &a);
    printf("ecrivez le nomber b : ");
    scanf("%d" , &b);
    somme = a + b;

    if(a == b){
        printf("la somme = %d" , somme * 3);
    }else{
        printf("la somme = %d" , somme);
    }


    return 0;
}
