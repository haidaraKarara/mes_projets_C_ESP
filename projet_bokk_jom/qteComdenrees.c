#include "qteComdenrees.h"
#include <stdio.h>
#include <stdlib.h>
int ajoutqtecomdenree()
{
	Qtecomdenree m;
	int trouve = 0;
	printf("\nEnregistrement d'une quantite d'une commande de denree(s)\n\n");
	printf("\nIdentifiant commdenree :  ");
	scanf("%d",&m.idcomdenree);
	printf("\nIdentifiant denree :  ");
	scanf("%d",&m.iddenree);
	printf("\nQuantite :  ");
	scanf("%d",&m.qte);
	FILE *l;
	l = fopen("qteComdenrees.csv", "a+");
	if(l == NULL)
	{
		printf("\nErreure d'ouverture du fichier qteComdenrees\n\n");
		exit(0);
	}
	else
	{
		fprintf(l,"%d  \t\t  %d  \t\t  %d  \t\t",m.idcomdenree,m.iddenree,m.qte);
		printf("\n\n");
		trouve = 1;
		fclose(l);
	}
	return trouve;
}
