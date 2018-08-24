#include "qteComMateriels.h"
#include <stdio.h>
#include <stdlib.h>
int qtecommateriels()
{
	qtecommateriel m;
	int trouve = 0;
	printf("\n\tEnregistrement de la quantité d'une commande\n\n");
	printf("\nIdentifiant commande:  ");
	scanf("%d",&m.idcommateriel);
	printf("\nIdentifinat materiel:  ");
	scanf("%d",&m.idmateriel);
	printf("\nQuantite commande:  ");
	scanf("%d",&m.qte);
	FILE *l;
	l = fopen("qtecommateriel.csv", "a+");
	if(l == NULL)
	{
		printf("\nErreure d'ouverture du fichier\n\n");
		exit(0);
	}
	else
	{
		fprintf(l, "%d  \t\t  %d  \t\t  %d  \t\t",m.idcommateriel,m.idmateriel,m.qte);
		trouve = 1;
		printf("\n\n");
		fclose(l);
    }
    return trouve;
}
