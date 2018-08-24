#include <stdio.h>
#define taillemax 50

int main()
{
    /*Déclaration des variables*/
    int T[taillemax],i,nbrelement,produit=1,somme=0,posmax=0,posmin=0,max,min;
    int occurence=0,nbrrechercher,occu_tabp=0,occu_tabn=0,tampon=0, nouveau_occu_tabp = 0,k = 0;
    float moyenne=0;
    int TABP[taillemax],TABN[taillemax];
    system ("color 4f");
    printf("\n\t\t\t\tBienvenue !");
    controle_saisie:
    printf("\nEntrer le nombre d'elements que vous voulez saisir :  ");
    scanf("%d",&nbrelement);
    if ((nbrelement < 0 ) || (nbrelement > taillemax))
    {
      goto  controle_saisie;
    }
    /*SAISI DU TABLEAU PAR L'UTILISATEUR */
    for ( i = 0; i < nbrelement; i++)
    {
        printf("\nValeur %d :  ",i+1);
        scanf("%d",&T[i]);
    }
    /*AFFICHAGE DU TABLEAU SAISI PAR L'UTILISATEUR */
    printf("\nVoici le tableau que vous avez saisi !\n");
    for ( i = 0; i < nbrelement; i++)
    {
        printf("%3d",T[i]);
    }
    /*CALCUL DE LA SOMME ET DU PRODUIT DES ELEMENTS DU TABLEAU */
    for ( i = 0; i < nbrelement; ++i)
    {
        somme +=T[i];
        produit *=T[i];
    }
        /*AFFICHAGE DE LA SOMME ET DU PRODUIT DES ELEMENTS DU TABLEAU */
        printf("\nLa somme des elements du tableu est %d et le produit est %d \n",somme,produit);
        /* LA MOYENNE DES ELEMENTS DU TABLEAU */
        moyenne = (float)somme /nbrelement;
        printf("\n\tLa moyenne des elements du tableau est %.2f\n",moyenne);
        /*le maximum et le minimum du tableau et leur position*/
        max = T[0];
        min = T[0];
        i=1;
    while ( i < nbrelement)
    {
        if (max < T[i])
        {
            max = T[i];
            posmax = i;
        }
        if (min > T[i])
        {
            min = T[i];
            posmin = i;
        }
        i++;
    }
    /* AFFICHAGE DE L'ELEMENT MAX ET MIN */
    printf("\nLe maximum des element est %d et sa position est %d",max,posmax+1);
    printf("\nLe minimum des element est %d et sa position est %d",min,posmin+1);
    /* le nombre d’occurrences d’un nombre donné par l’utilisateur.*/
    printf("\nDonner l'occurence que vous recherchez dans le tableau : ");
    scanf("%d",&nbrrechercher);
    i=0;
    while (i < nbrelement )
    {
        if (nbrrechercher == T[i])
        {
            occurence++;
        }
        i++;
    }
    /* AFFICHAGE DU NOMBRE D'OCCURENCE D'UNE VALEUR TAPEE PAR L'UTILISATEUR */
    if (occurence > 0)
    {
        printf("\nLe nombre d'occurence de la valeur que vous recherchez est %d\n",occurence);
    }

    if (occurence == 0)
    {
        printf("\nLa valeur que vous recherchez n'existe pas dans le tableau\n");
    }
    /* Copie de toutes les composantes strictement positives dans un deuxième tableau TABP */
    int j=i=0;
    while ( i < nbrelement )
    {
        if (T[i] > 0)
        {
            TABP[j++]= T[i];
            occu_tabp++;
        }
        i++;
    }
    /* Copie de toutes les composantes strictement negatives dans un deuxième tableau TABN */
    i = j = 0;
    while ( i < nbrelement)
    {
        if (T[i] < 0)
        {
            TABN[j++]= T[i];
            occu_tabn++;
        }
        i++;
    }
    /*AFFICHAGE DES TABLEAU TABP ET TABN */
    if (occu_tabp > 0)
    {
        printf("\n\n\tVoici le tableau TABP : \n");
        for (i = 0; i < occu_tabp; i++)
        {
            printf(" %d ",TABP[i]);
        }
    }
    else
    {
        printf("\n\n\tAucune valeur dans le tableau TABP !\n");
    }
    if (occu_tabn > 0)
    {
        printf("\n\t\tVoici le tableau  TABN : \n");
        for ( i = 0; i < occu_tabn; i++)
        {
            printf(" %d ",TABN[i]);
        }
    }
    else
    {
        printf("\n\n\tAucune valeur dans le tableau TABN !\n");
    }
    /* Effaçons ensuite toutes les occurrences de la valeur 10 dans le tableau TABP et tassons les
    éléments restants. Affichons le tableau résultant.*/
    for (i=0; i < occu_tabp - 1; i++)
    {
        if (TABP[i] == 10)
        {
            for (j = i+1; j < occu_tabp; j++)
            {
                if (TABP[j] != 10)
                {
                    tampon = TABP[i];
                    TABP[i] = TABP[j];
                    TABP[j] = tampon;
                    break;
                }
            }
        }
        if (TABP[i] == 10)
        {
            break;
        }
        else
        {
            nouveau_occu_tabp++;
        }
    }
    /* AFFICHAGE DU NOUVEAU TABLEU TABP */
    printf("\n\n\tVoici le nouvea tableau TABP\n");
    for (i = 0; i < nouveau_occu_tabp; i++)
    {
        printf("%3d",TABP[i]);
    }
    return 0;
}
