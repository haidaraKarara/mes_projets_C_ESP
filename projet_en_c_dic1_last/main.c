#include <stdio.h>
#include <stdlib.h>
#include "insererMembre.h"

int main()
{
    FILE *f= fopen("membre.txt","r+");
    pliste l = creerListeVide();
    plisteFormation form = creerListeVideFormation();
    int nombreDeFormation;
    Membre unMembre;
    int i = 0,key,j = 0;
    int rechercher; //permet de rechercer le numéro du membre.
    //Point d'entrée de l'application
    system("clear"); 
	printf("\n\n\t\t                     GESTION DES MEMBRE D'UNE ASSOCIATION\n\n");
    char * login = (char*)malloc(sizeof(char) * 10);
    char * mdp = (char*)malloc(sizeof(char) * 10);
    do
    {
    	printf("\nEntrer Votre login : ");
    	scanf("%s",login);
    	printf("\nEntrer Votre mot de passe : ");
    	scanf("%s",mdp);
    } while (rechercherLoginMdp(login,mdp) == 0);
    system("clear"); 
    //Chargement de la liste chainée
    char *chaineDeParcours;
    size_t nbrOctet = 100;
	chaineDeParcours = (char*)malloc(sizeof(char));
	if (f == NULL)
	{
        exit(EXIT_FAILURE);
	}
	if (getline(&chaineDeParcours,&nbrOctet,f) == -1)
	{
	 	goto label1;
	}
	else
	{
		do
		{
			unMembre =  chargerListeChainee(f,chaineDeParcours);
			insererDernier(unMembre,&l);
			for (i = 0; i < unMembre.nformation; ++i)
			{
				//Ajour d'une formation dans la liste de formation d'un membre.
				insererEnQueue(unMembre.formation[i],&form);
			}
		}while(getline(&chaineDeParcours,&nbrOctet,f) != -1);
	}
	//Fin chargement de la liste chainée
	int choix1 = 0;
	label1:
	printf("\n\n\t\t                     GESTION DES MEMBRE D'UNE ASSOCIATION\n\n");
    printf("\n\t\t                      ++++++++++++++++++++++++++++++   ");
	printf("\n\t\t                      ------------------------------   ");
	printf("\n\t\t                              '''   '''  '''           ");
	printf("\n\t\t                      '''''''  MENU PRINCIPAL ''''''   ");
	printf("\n\t\t                              '''   '''  '''           ");
	printf("\n\n\t\t                                                     ");
	printf("\n\n\t\t                      1: Inserer un membre           ");
	printf("\n\n\t\t                      2: Modifier un membre     	 ");
	printf("\n\n\t\t                      3: Supprimer un membre 		 ");
	printf("\n\n\t\t                      4: Rechercher un membre 		 ");
	printf("\n\n\t\t                      5: Quitter                     ");
	printf("\n\n\t\t                      								 ");
	printf("\n\n\t\t                      +++++++++++++++++++++++++++++++");
	printf("\n\n");
	printf("\n      Votre choix ?  ");
	scanf("%d",&choix1);
	switch(choix1)
	{
		case 1  :
					unMembre = creerMembre(&nombreDeFormation,l);
					insererDernier(unMembre,&l);
					for (i = 0; i < nombreDeFormation; ++i)
					{
						//Ajour d'une formation dans la liste de formation d'un membre.
						insererEnQueue(unMembre.formation[i],&form);
					}
					SystemPause();
					system("clear");
                    goto label1;
		case 2 :
					printf("\nDonne le numéro du membre à Modifier : ");
					scanf("%d",&rechercher);
					if (1 == rechercheMembre(rechercher,l))
					{
						supprimerMembre(&l,rechercher);
						unMembre = creerMembre(&nombreDeFormation,l);
						insererDernier(unMembre,&l);
						/*for (i = 0; i < nombreDeFormation; ++i)
						{
							//Ajour d'une formation dans la liste de formation d'un membre.
							insererEnQueue(unMembre.formation[i],&form);
						}*/
					printf("\n\nLe membre a ete Modifier avec succes !\n\n");
					}
					else
					{
						printf("\nCe membre n'existe pas dans la liste\n\n");
					}
					SystemPause();
					system("clear");
					goto label1;
		case 3 :
					printf("\nDonne le numéro du membre à supprimer : ");
					scanf("%d",&key);
					if ( 0 == supprimerMembre(&l,key))
					{
						printf("\nLe numéro de ce membre n'existe pas.\n");
					}
					else
					{
						printf("\nLe membre %d a ete supprimer avec succes ! \n",key);
					}
					SystemPause();
					system("clear");
					goto label1;
		case 4 :	
					printf("\nDonne le numéro du membre à rechercher : ");
					scanf("%d",&rechercher);
					printf("\n\n");
					if (1 == rechercheMembre(rechercher,l))
					{
						printf("%d:%s:%s:%s",l->m.numero,l->m.nom,l->m.prenom,l->m.adresse);
						j=0;		 
						while(j < l->m.nformation)
						{
							printf(":%d:%s:%d",l->m.formation[j].codeClasse,l->m.formation[j].intitule,l->m.formation[j].annee);
							form = form->suiv;
							j++;
						}
						printf("\n\n");
					}
					else
					{
						printf("\nCe membre n'existe pas dans la liste\n\n");
					}
					SystemPause();
					system("clear");
					goto label1;
		case 5 	: 	save(l,form);//Enregistrement dans le fichier lors de la fermeture du programme.
					exit(0);
		default :
					printf("\n\t\tOUPS MAUVAIS CHOIX !!\n");
					SystemPause();
					system("clear");
					goto label1;
	}
    return 0;
}
