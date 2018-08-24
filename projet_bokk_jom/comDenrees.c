#include "comDenrees.h"
#include <stdio.h>
#include <stdlib.h>
void ajoutcommandedenrees()
{
	Ajoutcomdenree m;
	printf("\nInformation a fournir pour enregistrer une commande\n\n");
	printf("\nIdentifiant commande :  ");
	scanf("%d",&m.idcomdenree);
	printf("\nIdentifiant membre :  ");
	scanf("%d",&m.idmembre);
	printf("\nDate de la demande ");
	printf("\nJour :  ");
	scanf("%d",&m.date.jour);
	m.date.mois = (char*)malloc(sizeof(char) * 30);
	printf("\nMois :  ");
	scanf("%s",m.date.mois);
	printf("\nAnnee :  ");
	scanf("%d",&m.date.annee);
	FILE *l;
	l = fopen("comDenree.csv", "a+");
	if(l == NULL)
	{
		printf("\nErreure d'ouverture du fichier comDenree\n\n");
		exit(0);
	}
	else
	{
		fprintf(l, "%d  \t\t  %d  \t\t  %d  \t\t  %s  \t\t  %d  \t\t",m.idcomdenree,m.idmembre,m.date.jour,m.date.mois,m.date.annee);
		printf("\n\n");
		fclose(l);
	}
}
