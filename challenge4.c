#include <stdio.h>
#include <math.h>

// Challenge 4 : Equation deuxième degré
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 ====================== Challenge 4 : Equation deuxième degré  ===================\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{
    premierFonction();

    int a, b, c;
    float D, X1, X2, X, e;

    printf("A = ");
    scanf("%d", &a);
    printf("B = ");
    scanf("%d", &b);
    printf("C = ");
    scanf("%d", &c);

    D = (pow(b, 2) - (4 * a * c));
    e = 2 * a;

    if (D > 0)
    {
        printf("equation  deux soulition \n");
        // printf("D = %.2f\n", D);
        X1 = (-b - sqrt(D)) / e;
        X2 = (-b + sqrt(D)) / e;
        printf("X1 = %.2f\n", X1);
        printf("X2 = %.2f\n", X2);
    }
    else if (D == 0)
    {
        printf("equation un soulition \n");
        // printf("D = %.2f\n", D);
        X = (-b) / e;
        printf("X = %.2f\n", X);
    }
    else
    {
        printf("equation  pas soulition \n");
    }

    return 0;
}
