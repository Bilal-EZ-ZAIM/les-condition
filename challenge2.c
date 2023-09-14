#include <stdio.h>
#include <string.h>
// Les Conditions
// Challenge 2 : ce un caractère  voyelle
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 ================== Challenge 2  : ce un caractère  voyelle ======================\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{

    premierFonction();
    char C;
    printf("ecrivez le caractère ");
    scanf("%c", &C);
    switch (C)
    {
    case 'a':
        printf("le  %c est vouyale\n", C);
        break;
    case 'o':
        printf("le  %c est vouyale\n", C);
        break;
    case 'e':
        printf("le  %c est vouyale\n", C);
        break;
    case 'u':
        printf("le  %c est vouyale\n", C);
        break;
    case 'i':
        printf("le  %c est vouyale\n", C);
        break;
    case 'y':
        printf("le  %c est vouyale\n", C);
        break;
    case 'A':
        printf("le  %c est vouyale\n", C);
        break;
    case 'O':
        printf("le  %c est vouyale\n", C);
        break;
    case 'E':
        printf("le  %c est vouyale\n", C);
        break;
    case 'U':
        printf("le  %c est vouyale\n", C);
        break;
    case 'I':
        printf("le  %c est vouyale\n", C);
        break;
    case 'Y':
        printf("le  %c est vouyale\n", C);
        break;
    default:
        printf("pas %c  vouyale\n", C);
        break;
    }
    return 0;
}
