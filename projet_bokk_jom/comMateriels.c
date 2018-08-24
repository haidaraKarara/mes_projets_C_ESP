#include <stdio.h>
#include <stdlib.h>
#include "comMateriels.h"
void commande()
{
	Commateriel m ;
    m.date.mois = (char*)malloc(sizeof(char) * 10);
	printf("\n\t\t\tEnregistrement d'une commande de materiel(s)\n\n");
    printf("\nidcommateriel:  ");
    scanf("%d",&m.idcommateriel);
     printf("\nDate de commande \n");
    do
    {
         printf("\nJour :  ");
         scanf("%d",&m.date.jour);
    }
    while(m.date.jour < 0 || m.date.jour > 31);
        printf("\nMois :  ");
        scanf("%s",m.date.mois);
        printf("\nAnnee :  ");
        scanf("%d",&m.date.annee);
    // ecriture sur le fichier
    FILE *l;
    l = fopen("Commateriel.csv","a+");
    if(l == NULL)
    {
    	printf("\nErreure d'ouverture du fichier Commateriel");
    	exit(0);
    }
    else
    {
    	fprintf(l, "\n%d \t\t %d  \t\t  %s  \t\t  %d  \t\t",m.idcommateriel,m.date.jour,m.date.mois,m.date.annee);
    	printf("\n\n");
    	fclose(l);
    }
}
