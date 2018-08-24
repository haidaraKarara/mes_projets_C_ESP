#include <stdio.h>
#include <math.h>
#define TVA 0.196

int main()
{
    system("color 4f");/* fond d'écran */
    float PHT,TTC;
    printf("\t\t\t\t[TP1]\n\n");
    printf("\n--------------------------------------------------------------------------------\n");
    printf("\nEXO 1 :                Calcul d'un prix TTC\n\n");
    printf("\n--------------------------------------------------------------------------------\n");
    printf("\t\nDonner le prix hors taxe :  ");
    scanf("%f",&PHT);
    TTC= PHT * (1 + TVA);
    printf(" \nPrix TTC =  %.2f  FCFA\n\n",TTC);
    printf("\nPrix TTC =   %.10f  FCFA\n\n",TTC);


    return 0;
}
