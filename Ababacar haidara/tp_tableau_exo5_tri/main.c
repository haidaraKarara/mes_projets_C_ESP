/* tri d'un tableau et recherche d'un minima */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color 4f");
    int t1[30],min,i,j,tampon,taille;
    printf("\t\tTRI CROISSANT ET RECHERCHE D'UN MINIMA!\n");
    do
    {
        printf("\nDonner la taille du tableau :  ");
        scanf("%d",&taille);
    }
    while ((taille < 0 ) || (taille > 30));
    printf("\nEtrer les valeur du tableau :\n");
    for (i = 0; i < taille; i++)
    {
        printf("\nValeur %d = ",i+1);
        scanf("%d",&t1[i]);
    }
    /* TRI DU TABLEAU SAISI PAR L'UTILISATEUR */
    for (i = 0; i < taille - 1; i++)
    {
        min = i;
        for (j = i + 1; j <= taille; j++)
        {
            if (t1[j] < t1[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            tampon = t1[i];
            t1[i] = t1[min];
            t1[min] = tampon;
        }
    }

    /* AFFICHAGE DU TABLEAU ET DE SON PLUS PETIT ELEMENT */
    printf("\n\tVoici le tableau apres etre trie !\n");
    for (i = 0; i < taille; i++)
    {
        printf("%3d",t1[i]);
    }
    printf("\nLe plus petit element du tableau est %d\n\n",t1[0]);
    return 0;
}
