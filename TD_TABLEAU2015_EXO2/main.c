#include <stdio.h>
#include <stdlib.h>
#define MAX_LIGNE_COLONNE 50
int main()
{
    /* DECLARATION DES VARIABLES */
    int t[MAX_LIGNE_COLONNE][MAX_LIGNE_COLONNE],nbr_de_ligne,nbr_de_colonne;
    int i = 0,j = 0;
    system ("color 4f");
    printf("\n\t\t\tBIENVENUE");
    /* CONTROLE DE SAISIE DU TABLEAU A DEXU DIMENSIONS */
    do
    {
        printf("\nDonner le nombre de ligne(s) du tableau a deux dimension :  ");
        scanf("%d",&nbr_de_ligne);
    }
    while ((nbr_de_ligne < 0) && (nbr_de_ligne > MAX_LIGNE_COLONNE ));
    do
    {
        printf("\nDonner le nombre de colonne(s) du tableau a deux dimension :  ");
        scanf("%d",&nbr_de_colonne);
    }
    while ((nbr_de_colonne < 0) && (nbr_de_colonne > MAX_LIGNE_COLONNE ));
    /* SAISIE DU TABLAU A DEUX DIMENSIONS */
    for (i = 0; (i < nbr_de_ligne); i++)
    {
        for (j = 0; (j < nbr_de_colonne); j++)
        {
            printf("\nEntrer la valeur %d :  ",i + 1);
            scanf("%d",&t[i][j]);
        }
    }
    /* AFICHAGE DU TABLEAU A DEUX DIMENSIONS */
    printf("\n\t\tVoici le tableau que vous avez saisi : \n");
    for (i = 0 ;i < nbr_de_ligne; i++)
    {
        for (j = 0; j < nbr_de_colonne; j++)
        {
             printf("%3d",t[i][j]);
        }
    }
    return 0;
}
