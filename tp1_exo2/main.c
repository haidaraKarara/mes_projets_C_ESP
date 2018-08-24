#include <stdio.h>
#include <stdlib.h>

int main()
{
     system("color 5f"); /* fond d'écran */

    /* Déclaration des variables */
    float moy_arithmetique=0,moy_geometrique=0,a=0,b=0,moy_arithmetique1=0,moy_geometrique1=0,a1=4,b1=2;


    printf("\n-------------------------------------------------------------------------------\n");
    printf("\nEXO2:  Difference entre moyenne arithmrtique et moyenne geometrique\n\n");
    printf("\n--------------------------------------------------------------------------------\n");

    /* les nombres en question sont fixes*/

    moy_arithmetique1 = (a1+b1)/2;
    moy_geometrique1 = sqrt(a1 * b1);
    printf("\nla difference entre la moyennes artithmetique et geometrique \n\n(valeurs figees a = 4 et b= 2) est : %.2f\n\n",(moy_arithmetique1 - moy_geometrique1));

    /*les nombres en question sont acquis*/

    printf("\nMaintenant pour des valeurs que vous allez siasir \n");
    printf("\nDonner la valeur de a :   ");
    scanf("%f",&a);
    printf("\nDonner la valeur de b :   ");
    scanf("%f",&b);
    moy_arithmetique = (a+b)/2;
    moy_geometrique = sqrt(a * b);
        if (moy_arithmetique >= moy_geometrique)
        {
            printf("\nMoyenne arithmetique = %.2f , Moyenne geometrique = %.2f\n",moy_arithmetique,moy_geometrique);
            printf("\nla difference entre la moyennes artithmetique et geometrique est : %.2f\n\n",(moy_arithmetique - moy_geometrique));
        }
            else
            {
                printf("\nla difference entre la moyennes artithmetique et geometrique est : %.2f\n\n",(moy_geometrique - moy_arithmetique));
                printf("\nMoyenne arithmetique = %.2f , Moyenne geometrique = %.2f\n",moy_arithmetique,moy_geometrique);
            }

    return 0;
}
