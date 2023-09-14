#include <stdio.h>

// Challenge 10 : l'affiche sous le format suivant.
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 ============= Challenge 10 : l'affiche sous le format suivantl ==================\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{

    premierFonction();
    int joure , mois , annee;
    printf("ecrevez le joure : ");
    scanf("%d" , &joure);
    printf("ecrevez le mois : ");
    scanf("%d" , &mois);
    printf("ecrevez le annee: ");
    scanf("%d" , &annee);

    // printf("%d/%d/%d",joure , mois , annee);

    if(mois == 1){
        printf("%d-Janvier-%d\n",joure , annee);
    }
    if(mois == 1){
        printf("%d-Janvier-%d\n",joure , annee);
    }
    if(mois == 2){
        printf("%d-Février-%d\n",joure , annee);
    }
    if(mois == 3){
        printf("%d-Mars-%d\n",joure , annee);
    }
    if(mois == 4){
        printf("%d-Avril-%d\n",joure , annee);
    }
    if(mois == 5){
        printf("%d-Mai-%d\n",joure , annee);
    }
    if(mois == 6){
        printf("%d-Juin-%d\n",joure , annee);
    }
    if(mois == 7){
        printf("%d-Juillet-%d\n",joure , annee);
    }
    if(mois == 8){
        printf("%d-Août-%d\n",joure , annee);
    }
    if(mois == 9){
        printf("%d-Septembre-%d\n",joure , annee);
    }
    if(mois == 10){
        printf("%d-Octobre-%d\n",joure , annee);
    }
    if(mois == 11){
        printf("%d-Novembre-%d\n",joure , annee);
    }
    if(mois == 12){
        printf("%d-Décembre-%d\n",joure , annee);
    }


    return 0;
}
