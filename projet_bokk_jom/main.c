//******************************/
/*Programme de gestion d'un GIE

*******************************/
#include <stdio.h>
#include <stdlib.h>
#include "Membre.h"
#include "comDenrees.h"
#include "comMateriels.h"
#include "denrees.h"
#include "faireComMateriels.h"
#include "qteComdenrees.h"
#include "qteComMateriels.h"
int main(int argc, char const *argv[])
{

    system("color 5f");
	/* Déclaration des variables*/
	int choix0 = 0,choix1 = 0,choix2 = 0,choix3 = 0,choix4 = 0;
	int choix5 = 0,choix6 = 0,choix7 = 0,choix8 = 0;
	printf("                                GIE BOKK JOM!\n\n\n   ");
	label0 : // Etiquette pour rvenir dans le menu principal
	printf("\n                      ++++++++++++++++++++++++++++++ ");
	printf("\n                      ------------------------------ ");
	printf("\n                              '''   '''  '''         ");
	printf("\n                      '''''''  MENU PRINCIPAL '''''' ");
	printf("\n                              '''   '''  '''         ");
	printf("\n                                                     ");
	printf("\n                      1: Gestion des membres         ");
	printf("\n                      2: Gestion de faireComMateriels");
	printf("\n                      3: Gestion des comMateriels    ");
	printf("\n                      4: Gestion des qteComMateriels ");
	printf("\n                      5: Gestion des materiels       ");
	printf("\n                      6: Gestion des comDenrees      ");
	printf("\n                      7: Gestion des qteComdenrees   ");
	printf("\n                      8: Gestion des denrees         ");
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
					printf("\n                      1 : pour ajout membres        ");
					printf("\n                      2 : pour suppression membres  ");
					printf("\n                      3 : pour modfifier membres    ");
					printf("\n                      4 : pour recherche membres    ");
					printf("\n                      5 : pour menu principal       ");
					printf("\n                                                    ");
					printf("\n                      ------------------------------");
                    printf("\n                      ++++++++++++++++++++++++++++++");
                    printf("\n\n");
					printf("\n          Votre choix ?  ");
					scanf("%d",&choix1);
					system("cls");
					int ajtmembre = 0;
					switch(choix1)
					{
						case 1 :
                                    if(ajoutmembre() == 1)
                                    {
                                        printf("\n\tEnregistrement reussi !\n");
                                    }
                                    else
                                    {
                                        printf("\n\t\tEnregistrement echoue !\n");
                                    }
                                    goto label1;
						case 2 :
                                    suppressionMembre();
									goto label1;
						case 3 :
									goto label1;
						case 4 :
                                    recherchemembre();
									goto label1;
						case 5 :
									goto label0;
						default :
									printf("Oups ! mauvais choix.\n");
									goto label1;
				}
		label2:
		case 2:
                    printf("\n\n");
                    printf("\n                         ++++++++++++++++++++++++++++++++++++++");
                    printf("\n                         ----------------------------------------");
                    printf("\n                          ''' '''    '''  '''  '''  '''  '''  '''  ");
					printf("\n                            Sous menu Gestion de faireComMateriels ");
					printf("\n                          '''  '''   ''''   '''  '''  '''  '''  '''");
					printf("\n                                      1: pour ajout commande       ");
					printf("\n                                      2: pour Menu principal       ");
					printf("\n                                                                   ");
					printf("\n                         ----------------------------------------");
                    printf("\n                         ++++++++++++++++++++++++++++++++++++++++");
                    printf("\n\n");
					printf("\n            Votre choix ?  ");
					scanf("%d",&choix2);
					system("cls");
					switch(choix2)
					{
						case 1:
                                    fairecommandemateriels();
									goto label2;
						case 2:
									goto label0;
						default:
									printf("Oups ! mauvais choix.\n");
                                    goto label2;
					}
		label3:
		case 3:
                    printf("\n\n");
                    printf("\n                               ++++++++++++++++++++++++++++++++++++++++");
                    printf("\n                               ----------------------------------------");
                    printf("\n                               '''  '''  '''  '''  '''  '''  '''  '''  ");
					printf("\n                                Sous Menu Gestion des comMateriels     ");
                    printf("\n                               '''   ''''   '''  '''  '''  '''  ''' '' ");
					printf("\n                                  1 : pour suppression commande(s)     ");
					printf("\n                                  2 : pour modfifier commande(s)       ");
					printf("\n                                  3 : pour recherche commande(s)       ");
					printf("\n                                  4 : pour enregistrer une commande    ");
					printf("\n                                  5 : pour menu principal              ");
					printf("\n                                                                       ");
					printf("\n                               ----------------------------------------");
                    printf("\n                               +++++++++++++++++++++++++++++++++++++++++");
                    printf("\n\n");
					printf("        Votre choix ?  ");
					scanf("%d",&choix3);
                    system("cls");
					switch(choix3)
					{
						case 1:
									goto label3;
						case 2:
									goto label3;
						case 3:
									goto label3;
						case 4:
                                    commande();
									goto label0;
                        case 5:
                                    goto label0;
						default:
									printf("Oups ! mauvais choix.\n");
									goto label3;
				}
		label4:
		case 4:
                    printf("\n\n");
                    printf("\n                                +++++++++++++++++++++++++++++++++++++++++");
                    printf("\n                               ------------------------------------------");
                    printf("\n                              '' '''  '''  '''  '''  '''  '''  '''  ''' '");
					printf("\n                               Sous Menu Gestion des qtecomMateriels     ");
					printf("\n                              ''  ''   ''''   '''  '''  '''  '''  ''' '' ");
					printf("\n                                  1 : pour enregistrer qtecomMateriels(s)");
					printf("\n                                  2 : pour recherche qtecomMateriel(s)   ");
					printf("\n                                  3 : pour modifier qtecomMateriel(s)    ");
					printf("\n                                  4 : pour menu principal                ");
					printf("\n                                                                         ");
					printf("\n                              -------------------------------------------");
                    printf("\n                              +++++++++++++++++++++++++++++++++++++++++++");
                    printf("\n\n");
					printf("           Votre choix ?   ");
					scanf("%d",&choix4);
					system("cls");
					switch(choix4)
					{
						case 1:
                                    qtecommateriels();
									goto label4;
						case 2:
									goto label4;
						case 3:
									goto label4;
                        case 4:
                                    goto label0;
						default:
									printf("Oups ! Mauvais mo temps\n");
									goto label4;
					}
		label5:
		case 5:
                    printf("\n\n");
                    printf("\n                            ++++++++++++++++++++++++++++++++++++++");
                    printf("\n                            --------------------------------------");
                    printf("\n                             '''   ''' ''' '' '''  '''  '''  '''  ");
					printf("\n                              Sous Menu Gestion des materiel(s)   ");
                    printf("\n                             ' ' ''  ''   ''''   '''  '''  '''  ''");
					printf("\n                                  1: pour ajout materiel(s)       ");
					printf("\n                                  2: pour suppression materiel(s) ");
					printf("\n                                  3: pour rechercher materiel(s)  ");
					printf("\n                                  4: pour modifier materiels(s)   ");
					printf("\n                                  5: pour menu principal          ");
					printf("\n                                                                  ");
					printf("\n                            --------------------------------------");
                    printf("\n                            ++++++++++++++++++++++++++++++++++++++");
                    printf("\n\n");
					printf("        Votre choix ?  ");
					scanf("%d",&choix5);
					system("cls");
					switch(choix5)
					{
						case 1:

									goto label5;
						case 2:
									goto label5;
						case 3:
									goto label5;
						case 4:
									goto label5;
						case 5:
									goto label0;
						default:
									printf("Oups ! mauvais choix.\n");
									goto label5;
					}
		label6:
		case 6:
                    printf("\n\n");
                    printf("\n                            +++++++++++++++++++++++++++++++++       ");
                    printf("\n                            ----------------------------------      ");
                    printf("\n                            '''  '''  '''  '''  '''  '''  '''       ");
					printf("\n                              Sous Menu Gestion des comDenrees      ");
                    printf("\n                             '' '''   ''''   '''  '''  '''  '''     ");
					printf("\n                                  1: pour ajout commande            ");
					printf("\n                                  2: pour suppression commande(s)   ");
					printf("\n                                  3: pour modifier commande         ");
					printf("\n                                  4: pour rechercher commande       ");
					printf("\n                                  5: pour menu principal            ");
					printf("\n                                                                    ");
					printf("\n                             ---------------------------------       ");
                    printf("\n                             +++++++++++++++++++++++++++++++++       ");
                    printf("\n\n");
					printf("\n      Votre choix ?  ");
					scanf("%d",&choix6);
                    system("cls");
				    switch(choix6)
                    {
                        case 1:
                                    ajoutcommandedenrees();
                                    goto label6;
                        case 2:
                                    goto label6;
                        case 3:
                                    goto label6;
                        case 4:
                                    goto label6;
                        case 5:
                                    goto label0;
                        default:
                                    printf("Oups ! mauvais choix.\n");
                                    goto label6;
                    }
		label7:
		case 7:
                    printf("\n\n");
                    printf("\n                              +++++++++++++++++++++++++++++++++++++++++");
                    printf("\n                              -----------------------------------------");
                    printf("\n                              ' '''  '''  '''  '''  '''  '''  '''  ''' ");
					printf("\n                              Sous Menu Gestion des qtecomDenrees      ");
                    printf("\n                               '  ' '''   ''''   '''  '''  '''  '''  ''");
					printf("\n                                  1: pour enregistrer qtecomDenrees    ");
					printf("\n                                  2: pour rechercher qtecomdenrees     ");
					printf("\n                                  3: pour modifier qtecomdenrees       ");
					printf("\n                                  4: pour menu principal               ");
					printf("\n                                                                       ");
					printf("\n                            -------------------------------------------");
                    printf("\n                            +++++++++++++++++++++++++++++++++++++++++++");
                    printf("\n\n");
					printf("        Votre choix ?  ");
					scanf("%d",&choix7);
                    system("cls");
                    int ajtqtecomdenree = 0;
                    switch(choix7)
                    {
                        case 1:
                                    ajtqtecomdenree = ajoutqtecomdenree();
                                    if(ajtqtecomdenree == 1)
                                    {
                                        printf("\n\tEnregistrement reussi !.\n");
                                    }
                                    else
                                    {
                                        printf("\n\tEnregistrement echoue !.\n");
                                    }
                                    goto label7;
                        case 2:
                                    goto label7;
                        case 3:
                                    goto label7;
                        case 4:
                                    goto label0;
                        default:
                                    printf("Oups ! mauvais choix.\n");
                                    goto label7;
                    }
		label8:
		case 8:
                    printf("\n\n");
                    printf("\n                            ++++++++++++++++++++++++++++++++++++");
                    printf("\n                            ------------------------------------");
                    printf("\n                            ' '''  '''  '''  '''  '''  ''       ");
					printf("\n                              Sous menu Gestion Denree(s)       ");
					printf("\n                             '' '''   ''''   '''  '''  '''      ");
					printf("\n                                  1: pour ajout denree(s)       ");
					printf("\n                                  2: pour suppression denree(s) ");
					printf("\n                                  3: pour rechercher denree(s)  ");
					printf("\n                                  4: pour modifier denree(s)    ");
					printf("\n                                  5: pour menu principal        ");
					printf("\n                                                                ");
					printf("\n                            ------------------------------------");
                    printf("\n                            ++++++++++++++++++++++++++++++++++++");
                    printf("\n\n");
					printf("        Votre choix ?  ");
					scanf("%d",&choix8);
                    system("cls");
                    int ajtdenree = 0;
                    switch(choix8)
                    {
                            case 1:
                                        ajtdenree = ajoutdenree();
                                        if(ajtdenree == 1) // equivaut à dire que l'identifiant tapé par l'utilisateur existe déjà.
                                        {
                                           printf("\nCet identifiant existe deja dans le fichier.\n");
                                           printf("\nVeuillez changer de numero d'identification pour cette denree!.\n");
                                        }
                                        else
                                        {
                                            printf("\n\n\t\t Enregistrement reussi !.\n");
                                            printf("\n\n");
                                        }
                                        goto label8; // label8 se trouve à la ligne 293.
                            case 2:
                                        goto label8;
                            case 3:
                                        goto label8;
                            case 4:
                                        goto label8;
                            case 5:
                                        goto label0;
                            default:
                                        printf("Oups ! mauvais choix.\n");
                                        goto label8;
                    }
		case 9:
                    printf("\n\n\t\t\t\tBYE-BYE !\n\n\n");
                    system("pause");
					exit(0);
        default:
                    printf("Oups ! mauvais choix.\n");
                    goto label0;
	}
	return 0;
}
