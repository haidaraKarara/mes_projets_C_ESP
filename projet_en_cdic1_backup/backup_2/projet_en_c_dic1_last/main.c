#include <stdio.h>
#include <stdlib.h>
#include "insererMembre.h"
/** Fait une pause.
    \author http://ecrucru.free.fr/?page=pause
*/
void SystemPause();

int main()
{
    FILE *f = fopen("membre.txt","a");
    pliste l = creerListeVide();
    plisteFormation form=creerListeVideFormation();
    Membre unMembre;
    int increment = 0;
 	system("clear"); //int etat;
	/* Déclaration des variables*/
	int choix1 = 0;
	//int choix5 = 0,choix6 = 0,choix7 = 0,choix8 = 0;
	printf("\n\n\t                     GESTION DES MEMBRE D'UNE ASSOCIATION!\n\n");
	label1:
    printf("\n\t\t                      ++++++++++++++++++++++++++++++   ");
	printf("\n\t\t                      ------------------------------   ");
	printf("\n\t\t                              '''   '''  '''           ");
	printf("\n\t\t                      '''''''  MENU PRINCIPAL ''''''   ");
	printf("\n\t\t                              '''   '''  '''           ");
	printf("\n\n\t\t                                                     ");
	printf("\n\n\t\t                      1: Inserer un membre           ");
	printf("\n\n\t\t                      2: ............................");
	printf("\n\n\t\t                      3: ................... ......  ");
	printf("\n\n\t\t                      4: Quitter                     ");
	printf("\n\n\t\t                      								");
	printf("\n\n\t\t                      +++++++++++++++++++++++++++++++");
	printf("\n\n");
	printf("\n      Votre choix ?  ");
	scanf("%d",&choix1);
	switch(choix1)
	{
		case 1 :

					if (increment == 0)
					{
						increment++;
						unMembre = creerMembre(form);
						insererEntete(unMembre,&l);
						form = l->m.formation;
						insererEnQueue(unMembre.formation->f,&form);
						save(l,form,f);
						fclose(f);
						SystemPause();
						system("clear");
					}
					else
					{
						SystemPause();
						system("clear");
					}
                    goto label1;
		case 2 :

					goto label1;
		case 3 :
					goto label1;
		case 4 :

					goto label1;
		case 5 : 
					exit(0);
		default :
					printf("\n\t\tOups ! mauvais choix.\n");
					goto label1;
	}
    return 0;
}
//Fonction permettant de faire une pause.
void SystemPause()
{
   char magickey;
   fflush(stdin);
   printf("\t\tAppuyez sur une touche pour continuer...\n");
   scanf("%c", &magickey);
   magickey = getc(stdin);
   system("clear");
}
/*
label0 : // Etiquette pour revenir dans le menu principal


printf("\n\n");
    printf("\n                      ++++++++++++++++++++++++++++++");
    printf("\n                      ------------------------------");
    printf("\n                      '''   '''  '''  '''  '''  ''' ");
	printf("\n                        Gestion des  membres   ");
	printf("\n                      '''   '''  '''  '''  '''  ''' ");
	printf("\n                      1 : Inserer un membre         ");
	printf("\n                      2 : ........................  ");
	printf("\n                      3 : ......................    ");
	printf("\n                      4 : .......................   ");
	printf("\n                      5 : Quitter    ");
	printf("\n                                                    ");
	printf("\n                      ------------------------------");
    printf("\n                      ++++++++++++++++++++++++++++++");
    printf("\n\n");
	printf("\n          Votre choix ?  ");

*/