#include <stdio.h>
#include <stdlib.h>
#include "insererMembre.h"
/** Fait une pause.
    \author http://ecrucru.free.fr/?page=pause
*/
void SystemPause();
int main()
{
 	system("cls"); int etat;
	/* Déclaration des variables*/
	int choix0 = 0,choix1 = 0;
	//int choix5 = 0,choix6 = 0,choix7 = 0,choix8 = 0;
	printf("                     Gestion des membres d'une association!\n\n\n   ");
	label0 : // Etiquette pour revenir dans le menu principal
	printf("\n                      ++++++++++++++++++++++++++++++ ");
	printf("\n                      ------------------------------ ");
	printf("\n                              '''   '''  '''         ");
	printf("\n                      '''''''  MENU PRINCIPAL '''''' ");
	printf("\n                              '''   '''  '''         ");
	printf("\n                                                     ");
	printf("\n                      1: Gestion des membres         ");
	printf("\n                      2: ............................");
	printf("\n                      3: ................... ......  ");
	printf("\n                      4: ........................... ");
	printf("\n                      5: .....................       ");
	printf("\n                      6: ......................      ");
	printf("\n                      7: .........................   ");
	printf("\n                      8: ...................         ");
	printf("\n                      9: Quitter                     ");
    printf("\n                                                     ");
	printf("\n                      -------------------------------");
	printf("\n                      +++++++++++++++++++++++++++++++");
	printf("\n\n");
	printf("\n      Votre choix ?  ");
	scanf("%d",&choix0);
	system("cls");
	label1:
	switch(choix0)
	{
		case 1:
                    printf("\n\n");
                    printf("\n                      ++++++++++++++++++++++++++++++");
                    printf("\n                      ------------------------------");
                    printf("\n                      '''   '''  '''  '''  '''  ''' ");
					printf("\n                        Sous Menu Gestion membres   ");
					printf("\n                      '''   '''  '''  '''  '''  ''' ");
					printf("\n                      1 : Inserer un membre         ");
					printf("\n                      2 : ........................  ");
					printf("\n                      3 : ......................    ");
					printf("\n                      4 : .......................   ");
					printf("\n                      5 : .....................     ");
					printf("\n                                                    ");
					printf("\n                      ------------------------------");
                    printf("\n                      ++++++++++++++++++++++++++++++");
                    printf("\n\n");
					printf("\n          Votre choix ?  ");
					scanf("%d",&choix1);
					//system("clear");
					switch(choix1)
					{
						case 1 :
									 etat = insererMembre();
                                    if(1 == etat )
                                    {
                                        printf("\n\t\tEnregistrement reussi !\n");
                                    }
									else if(-1 == etat)
									{
										printf("\n\t\t\tERREUR D\'OUVERTURE DE FICHIER! ASSURER VOUS QUE LE FICHIER EST FERME\n");
									}
                                    else
                                    {
                                        printf("\n\t\t\tECHEC D\'ENREGISTREMENT ! CET IDENTIFIANT EXISTE DEJAS\n");
                                    }
									system("pause");
                                    goto label1;
						case 2 :

									goto label1;
						case 3 :
									goto label1;
						case 4 :

									goto label1;
						case 5 :
									goto label0;
						default :
									printf("Oups ! mauvais choix.\n");
									goto label1;
				}
		case 9: exit(0);
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
