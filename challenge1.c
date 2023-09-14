#include <stdio.h>
// Les Conditions
// Challenge 1 : Paire ou Impaire
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 ========================= Challenge 1 : Paire ou Impaire  =======================\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{
    premierFonction();


    int nombre , x = 0 ;
    
    printf("ecrivez le nomber : ");
    scanf("%d",&nombre);
    x = nombre % 2 ;
    if(x == 0){
        printf("le nomber %d est paire \n" , nombre);
    }else{
        printf("le nomber %d est impaire \n" , nombre);
    }
    
    

    return 0;
}
