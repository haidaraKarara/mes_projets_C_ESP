#include"faireComMateriels.h"
#include <stdio.h>
#include <stdlib.h>
void fairecommandemateriels()
{
	Fairecommande m;
	printf("\n\tInformations a fournir pour faire une commande\n\n");
	printf("\nIdentifiant membre :  ");
	scanf("%d",&m.idmembre);
	printf("\nIdentifiant commande :  ");
	scanf("%d",&m.idcommateriel);
	FILE* l;
	l = fopen("fairecommateriel.csv", "a+");
	if(l == NULL)
	{
		printf("\nErreure d'ouverture du fichier fairecommateriel.\n\n");
		exit(0);
	}
	else
	{
		fprintf(l,"%d  \t\t  %d  \t\t\n",m.idmembre,m.idcommateriel);
		fclose(l);
	}
	printf("\n\t\t\t Enregistrement reussi !");
	printf("\n\n");
}
