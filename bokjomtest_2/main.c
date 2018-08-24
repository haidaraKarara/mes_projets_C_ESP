/******************************/
/*Programme de gestion d'un GIE
/*	By:Ababacar Haidara
*******************************/
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	/* Déclaration des variables*/
	int choix0 = 0,choix1 = 0,choix2 = 0,choix3 = 0,choix4 = 0;
	int choix5 = 0,choix6 = 0,choix7 = 0,choix8 = 0,choix9 = 0;
	label0 : // Etiquette pour rvenir dans le menu principal
	printf("\n++++++++++++++++++++++++++++++");
	printf("\n------------------------------");
	printf("\n        '''   '''  '''        ");
	printf("\n'''''''  MENU PRINCIPAL ''''''");
	printf("\n        '''   '''  '''        ");
	printf("\n                              ");
	printf("\n 1: Gestion des membres       ");
	printf("\n 2: Gestion de faireComMateriels");
	printf("\n 3; Gestion des comMateriels  ");
	printf("\n 4: Gestion des qteComMateriels");
	printf("\n 5: Gestion des materiels  ");
	printf("\n 6: Gestion des comDenrees    ");
	printf("\n 7: Gestion des qteComdenrees ");
	printf("\n 8: Gestion des denrees");
	printf("\n 9: Quitter                   ");
	printf("\n------------------------------");
	printf("\n++++++++++++++++++++++++++++++");
	printf("\nVotre choix ?  ");
	scanf("%d",&choix0);
	label1:
	switch(choix0)
	{
		case 1:
					printf("Sous Menu Gestion membres\n");
					printf("1 : pour ajout membres\n");
					printf("2 : pour suppression membres\n");
					printf("3 : pour modfifier membres\n");
					printf("4 : pour recherche membres\n");
					printf("5 : pour menu principal\n");
					printf("votre choix ?\n");
					scanf("%d",&choix1);
					switch(choix1)
					{
						case 1 :
									ajoutmembre();
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
		label2:
		case 2:
					printf("Sous menu Gestion de faireComMateriels\n");
					printf("1: pour ajout commande\n");
					printf("2: pour Menu principal\n");
					printf("Votre choix ?\n");
					scanf("%d",&choix2);
					switch(choix2)
					{
						case 1:

									goto label2;

						case 2:
									goto label0;

						default:
									printf("Oups ! mauvais choix.\n");
									goto label2;

					}

		label3:
		case 3:
					printf("Sous Menu Gestion des comMateriels\n");
					printf("1 : pour suppression commande(s)\n");
					printf("2 : pour modfifier commande(s)\n");
					printf("3 : pour recherche commande(s)\n");
					printf("4 : pour menu principal\n");
					printf("votre choix ?\n");
					scanf("%d",&choix3);

					switch(choix3)
					{
						case 1:

									goto label3;

						case 2:

									goto label3;

						case 3:

									goto label3;

						case 4:
									goto label0;

						default:
									printf("Oups ! mauvais choix.\n");
									goto label3;

				}
		label4:
		case 4:
					printf("Sous Menu Gestion des qteMateriels\n");
					printf("1 : pour modfifier qteMateriels(s)\n");
					printf("2 : pour recherche qteMateriel(s)\n");
					printf("3 : pour menu principal\n");
					printf("votre choix ?\n");
					scanf("%d",&choix4);
					switch(choix4)
					{
						case 1:

									goto label4;

						case 2:

									goto label4;

						case 3:
									goto label0;

						default:
									printf("Oups ! Mauvais mo temps\n");
									goto label4;

					}

		label5:
		case 5:
					printf("Sous Menu Gestion des materiel(s)\n");
					printf("1: pour ajout materiel(s)\n");
					printf("2: pour suppression materiel(s) \n");
					printf("3: pour rechercher materiel(s)\n");
					printf("4: pour modifier materiels(s)\n");
					printf("5: pour menu principal\n");
					printf("Votre choix ?\n");
					scanf("%d",&choix5);
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
					printf("Sous Menu Gestion des comDenrees\n");
					printf("1: pour ajout commande\n");
					printf("2: pour suppression commande(s)\n");
					printf("3: pour modifier commande\n");
					printf("4: pour rechercher commande\n");
					printf("Votre choix ?  \n");
					scanf("%d",&choix6);

				switch(choix6)
				{
					case 1:

								goto label6;

					case 2:

								goto label6;

					case 3:

								goto label6;

					case 4:


					default:
								printf("Oups ! mauvais choix.\n");
								goto label6;

				}
		label7:
		case 7:
					printf("Sous Menu Gestion des qteDenrees\n");
					printf("1: pour modifier qteDenrees\n");
					printf("2: pour rechercher qtedenrees\n");
					printf("Votre choix ?  \n");
					scanf("%d",&choix7);

				switch(choix7)
				{
					case 1:

								goto label7;

					case 2:

								goto label7;

					default:
								printf("Oups ! mauvais choix.\n");
								goto label7;

				}
		label8:
		case 8:
					printf("Sous menu Gestion Denree(s)\n");
					printf("1: pour ajout denree(s)\n");
					printf("2: pour suppression denree(s) \n");
					printf("3: pour rechercher denree(s)\n");
					printf("4: pour modifier denree(s)\n");
					printf("5: pour menu principal\n");
					printf("Votre choix ?\n");
					scanf("%d",choix8);

				switch(choix8)
				{
					case 1:

									goto label8;

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
		default:
					printf("Oups ! mauvais choix.\n");
					goto label0;


	}
	return 0;
}
