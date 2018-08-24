/* SOMME DES ELEMENTS D'UN TABLEAU */
#include <stdio.h>
#define max 30


int main()
{
    system("color 4f");
    int t[max][max],i,j,nbrligne,nbrcolonne,som = 0,som_lig_col;
    do
    {
        printf("\nDonner le nombre de ligne(s) :  ");
        scanf("%d",&nbrligne);
    }
    while ((nbrligne < 0) || (nbrligne > max));
    do
    {
        printf("\nDdonner le nombre de colonne :  ");
        scanf("%d",&nbrcolonne);
    }
    while ((nbrcolonne < 0) || (nbrcolonne > max));
    for ( i = 0;  i < nbrligne; i++)
    {
        for (j = 0; j < nbrcolonne;  j++)
        {
            printf("\nt[%d][%d] = ",i + 1,j + 1);
            scanf("%d",&t[i][j]);
            som += t[i][j];
        }
    }
    /* AFFICHAGE DE LA MATICE */
    i=j=0;
    printf("\n\t\tVoici la matrice que vous avez saisi :\n");
     for ( i = 0; (i < nbrligne); i++)
    {
        for (j = 0; (j < nbrcolonne); j++)
        {
            printf("%3d",t[i][j]);
        }
        printf("\n");
    }
    /* AFFICHAGE DE LA SOMME DE TOUS SES ELEMENTS */
    printf("\nLa somme de tous les elements de la matrice est de %d\n",som);
    /*CALCUL DE CHAQUE LIGNE ET DE COLONNE */
    for (i = 0 ; i < nbrligne; i++)
    {
        som_lig_col = 0;
        for( j = 0; j < nbrcolonne; j++)
        {
            som_lig_col += t[i][j];
        }
            printf("\nLa somme de la ligne %d est egale a : %d\n",i + 1,som_lig_col);
    }
    printf("\n\n");
    for (j = 0; j < nbrcolonne; j++)
    {
        som_lig_col = 0;
        for (i = 0; i < nbrligne; i++)
        {
            som_lig_col += t[i][j];
        }
        printf("\nLa somme de la colonne %d est egale a : %d\n",j+1,som_lig_col);
    }
    return 0;
}
