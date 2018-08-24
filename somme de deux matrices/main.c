#include <stdio.h>
#include <stdlib.h>
#define max 30
int main()
{
    system ("color 4f");
    int tableau1[max][max],tableau2[max][max],somme[max][max],taille;
    int nbrligne,nbrcolonne,i,j;
    // CONTRÔLE DE SAISIE
    do
    {
        printf("\nDonner le nombre ligne du tableau : ");
        scanf("%d",&nbrligne);
    }
    while ((nbrligne < 0) || (nbrligne > max));
    do
    {
        printf("\nDonner le nombre de colonne du tableau :  ");
        scanf("%d",&nbrcolonne);
    }
    while ((nbrcolonne < 0) || (nbrcolonne > max ));
    // SAISIE DU PREMIER TABLEAU
    printf("\a\n\t\t\tSaisissez votre premier tableau !\n");
    for(i=0; i < nbrligne; i++)
    {
        for(j=0; j < nbrcolonne; j++)
        {
            printf("\nt[%d][%d] =  ",i+1,j+1);
            scanf("%d",&tableau1[i][j]);
        }
    }
    printf("\a\n\t\t\tFIN DE LA SAISIE DU PREMIER TABLEAU!\n");
    // SAISIE DU DEUXIEME TABLEAU
    printf("\a\n\t\t\tSaisissez votre deuximeme tableau !\n");
    for(i=0; i < nbrligne; i++)
    {
        for(j=0; j < nbrcolonne; j++)
        {
            printf("\nt[%d][%d] =  ",i+1,j+1);
            scanf("%d",&tableau2[i][j]);
        }
    }
    printf("\a\n\t\t\tFIN DE LA SAISIE DU DEUXIME TABLEAU !\n");
    // AFFICHAGE DES DEUX MATRICES
    printf("\nVoici le premier tableau que vous avez saisi:\n\a");
    for(i=0; i < nbrligne; i++)
    {
        for(j=0; j < nbrcolonne; j++)
        {
            printf("%3d",tableau1[i][j]);
        }
        printf("\n");
    }
    printf("\nVoici le deuxieme tableau que vous avez saisi:\n\a");
    for(i=0; i < nbrligne; i++)
    {
        for(j=0; j < nbrcolonne; j++)
        {
            printf("%3d",tableau2[i][j]);
        }
        printf("\n");
    }
    // somme des deux matrices
    for(i=0; i < nbrligne; i++)
    {
        for(j=0; j < nbrcolonne; j++)
        {
            somme[i][j] = tableau1[i][j] + tableau2[i][j];
        }
    }
    // AFFICHAGE DE LA SOMME DES DEUX MATRICES
    printf("\n\n Voici l'addition des deux matrices \a\n");
    for(i=0; i < nbrligne; i++)
    {
        for(j=0; j < nbrcolonne; j++)
        {
            printf("%3d",somme[i][j]);
        }
        printf("\n");
    }


    return 0;
}
