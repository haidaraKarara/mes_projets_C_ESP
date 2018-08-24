#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nombre;
    printf("\t\t");system("color 4f");
    printf("\n--------------------------------------------------------------------------------\n");
   printf("\t\t programme qui determine le signe d'un nombre\n");
    printf(" \n--------------------------------------------------------------------------------\n");
     printf("\t\t\nDonner un nombre de votre choix:  ");
    scanf("%lf",&nombre);
    if (nombre >0)
    {
        printf(" \t\t\nle nombre %.3lf est positif\a\n",nombre);
    }
    else if (nombre == 0)
    {
        printf(" \t\t\nle nombre %.3lf est nulle !\n",nombre);
    }
    else if (nombre<0)
    {
        printf("\t\t\nle nombre %.3lf est negatif !\n\n",nombre);
    }
    printf("\t\t"); system("pause");
            system("color 6f");
            printf("\n-----------------------------------------------------------------------------\n");
            printf("\t\t\n Programme qui determine  si un nombre est pair ou impair !\n\n");
            printf("\n------------------------------------------------------------------------------\n");
            long nb;
            printf("\n\t\tDonner un nombre :  ");
            scanf("%ld",&nb);
            if (nb%2 == 0)
            {
                printf(" \t\n%ld est un nombre PAIR\n",nb);
            }
            else
            {
                printf("\t\n%ld est un nombre IMPAIR\n",nb);
            }

    return 0;
}
