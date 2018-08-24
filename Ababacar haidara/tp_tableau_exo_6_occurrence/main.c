#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color 5f");
    int t[30],occurrence = 0,recherche,i,taille,nbrelement_sup_recherche = 0,nbrelement_inf_recherche = 0;
    printf("\t\tRecherche d'une occurrence dans un tableau !\n");
    /* SAISIE DU TABLEAU PAR L'UTILISATEUR */
    do
    {
         printf("\nDonner la taille du tableau :  ");
        scanf("%d",&taille);
    }
    while ((taille < 0)  || (taille > 30));
    for (i = 0 ; i < taille; i++)
    {
        printf("\nValeur %d : ",i + 1);
        scanf("%d",&t[i]);
    }
    /* AFFICHAGE DU TABLEAU */
    printf("\nVoici le tableau que vous avez saisi\n");
    for (i = 0; i < taille; i++)
    {
        printf("%4d",t[i]);
    }
    printf("\nEntrer la valeur que vous recherchez : ");
    scanf("%d",&recherche);
    /* RECHERCHE DE LA VALEUR SAISIE PAR L'UTILISATEUR */
    for(i = 0; i < taille; i++)
    {
        if (t[i] == recherche)
        {
            occurrence++;
        }
    }
    /* RECHERCHE DES VALEURS INFERIEURES ET SUPERIEURES */
    for (i = 0; i < taille; i++)
    {
        if (t[i] < recherche)
        {
            nbrelement_inf_recherche++;
        }
        if (t[i] > recherche)
        {
            nbrelement_sup_recherche++;
        }
    }
    if (occurrence != 0)
    {
        printf("\nLe nombre d'occurrence de la valeur %d est %d\n",recherche,occurrence);
        printf("\nLe nombre d'element(s) inferieure(s) a cette valeur est %d\n",nbrelement_inf_recherche);
        printf("\nLe nombre d'element(s) superieure(s) a cette valeur est %d\n",nbrelement_sup_recherche);
    }
    else
    {
        printf("\nLe nombre %d n'existe pas dans le tableau !\n",recherche);
    }
    return 0;
}
