#include "denrees.h"
#include <stdio.h>
#include <stdlib.h>
int ajoutdenree()
{
	Ajoutdenree m,rch;
	int trouve = 0;
	printf("\n\t\t\tAJOUT D'UNE DENREE\n\n");
	printf("\nIdentifiant denree :  ");
    scanf("%d",&m.iddenree);
    FILE *l;
	l = fopen("denrees.csv", "a+");
	if(l == NULL)
	{
		printf("\nErreure d'ouverture du fichier.\n\n");
		printf("\nIl se peut que le fichier 'denrees' soit ouverte.\n");
		exit(1);
	}
   do
   {
        fscanf(l,"%d \t %s \t %f",&rch.iddenree,rch.libel,&rch.prix);
        if(m.iddenree == rch.iddenree)
        {
            trouve = 1;
        }
   }
   while(!feof(l) && (trouve == 0));
    if(trouve == 0)
    {
         m.libel = (char*)malloc(sizeof(char) * 30);
        printf("\nLibel :  ");
        scanf("%s",m.libel);
        do
        {
            printf("\nprix :  ");
            scanf("%f",&m.prix);
        }
        while(m.prix < 0);
        fprintf(l,"%d  \t\t  %s  \t\t  %f  \t\t\n",m.iddenree,m.libel,m.prix);
        fclose(l);
    }
    return trouve; // Si trouve retourne la valeur 1 alors la denree existe dans le fichier.
}
