// Création d'un membre
#include <stdio.h>
#include <stdlib.h>
#include"Membre.h"
Membre creermembre()
{
	Membre m;
	// Passage de l'allocation dynamique.
	m.nom = (char*)malloc(sizeof(char) * 30);
	m.prenom = (char*)malloc(sizeof(char) * 30);
	m.adresse = (char*)malloc(sizeof(char) * 30);
	m.ddn.mois = (char*)malloc(sizeof(char) * 10);
	printf("\nIdentifiant membre :  ");
	scanf("%d",&m.idmembre);
	printf("\nNom :  ");
	scanf("%s",m.nom);
	printf("\nPrenom :  ");
	scanf("%s",m.prenom);
	printf("\nDate de naissance ");
	printf("\nJour :  ");
	scanf("%d",&m.ddn.jour);
	printf("\nMois :  ");
	scanf("%s",m.ddn.mois);
	printf("\nAnnee :  ");
	scanf("%d",&m.ddn.annee);
	printf("\nAdresse :  ");
	scanf("%s",m.adresse);
	return m;
}
// Ajouter un membre sur le fichier.
int ajoutmembre()
{
	FILE *af; // af = ancien fichier .
	int trouve = 0; // La fonction retourne la valeur trouve.
	int relais = 0;
	int trouve_id_membre = 0;
	// Ouverture de l'ancien fichier alias membre.csv .
	af = fopen("membre.csv", "a+");
	if (af == NULL)
	{
		printf("Erreure d'ouverture du fichier ""membre.csv""\n");
		exit(-1);
	}
    Membre am = creermembre();// am = membre à ajouter.
    Membre ch; //sert à rechercher l'existance d'un identifiant existant.
    // Cherchons si le nouveau idmembre existe déjà dans le fichier membre.csv .
      while(!feof(af) && trouve_id_membre == 0)
        {
            fscanf(af,"%d \t\t %s \t\t %s \t\t %d \t\t %s \t\t %d \t\t %s \n",&ch.idmembre,ch.nom,ch.prenom,&ch.ddn.jour,ch.ddn.mois,&ch.ddn.annee,ch.adresse);
            relais = ch.idmembre;
            if(am.idmembre == relais)
            {
                printf("\n\t\t Cet identifiant existe. Reesseyer un autre svp !\n\n");
                trouve_id_membre = 1;
                system("cls");
            }
        }
        if (trouve_id_membre == 1)
        {
            return 0;
        }
        else
        {
            fprintf(af,"%d \t\t %s \t\t %s \t\t %d \t\t %s \t\t %d \t\t %s \n",am.idmembre,am.nom,am.prenom,am.ddn.jour,am.ddn.mois,am.ddn.annee,am.adresse);
            fclose(af);
            return 1;

        }
}
// Recherchons un membre à partir de cette fonction.
void recherchemembre()
{
    int id;
    Membre m;
    printf("donner l'identifiant que vous voulez rechercher : ");
    scanf("%d",&id);
    printf("\n");
    FILE *fichier;
    fichier=fopen("membre.csv","a+");
    if(fichier==NULL)
    {
        printf("IMPOSSIBLE D'OUVRIR LE FICHIER \n");
        printf("\nIl se peut que le fichier soit deja ouvert !.\n");
        exit(0);
    }
    int verification=0;
    do
    {
        fscanf(fichier,"%d \t\t %s \t\t %s \t\t %d \t\t %s \t\t %d \t\t %s \n",&m.idmembre,m.nom,m.prenom,&m.ddn.jour,m.ddn.mois,&m.ddn.annee,m.adresse);
        printf("merci");
        /*if(m.idmembre==id)
        {
            verification=1;
            printf("\nlE MEMBRE CORRESPONDANT EST : \n");
            printf("\n Nom :  %d",m.idmembre);
            printf("\n Prenom :   %s",m.nom);
            printf("\nDate de Naissance");
            printf("\nJour :  %d",m.ddn.jour);
            printf("\nMois :  %s",m.ddn.mois);
            printf("\nAnnee :  %d",m.ddn.annee);
            printf("\nAdresse :  %s",m.adresse);
        }*/
    }
    while(!feof(fichier) && (verification == 0));/*
    if(verification == 0)
    {
        printf("\n");
        printf("CE MEMBRE N'EXISTE PAS DANS LE FICHIER \n");
        printf("\n");
    }*/
    fclose(fichier);
}
void suppressionMembre()
{
    Membre m;
    int id;
    printf("veuiller donner l'identifiant du membre a supprimer : ");
    scanf("%d",&id);
    printf("\n");
    FILE *fichier;
    fichier=fopen("membre.csv","a+");
    if(fichier==NULL)
    {
        printf("IMPOSSIBLE D'OUVRIR LE FICHIER \n");
        exit(0);
    }
    FILE *copie;
    copie=fopen("copie.csv","a+");
    if(fichier==NULL)
    {
        printf("IMPOSSIBLE D'OUVRIR LE FICHIER \n");
    }
    do
    {
        fscanf(fichier,"%d \t\t %s \t\t %s \t\t %d \t\t %s \t\t %d \t\t %s \n",&m.idmembre,m.nom,m.prenom,&m.ddn.jour,m.ddn.mois,&m.ddn.annee,m.adresse);
        if(id!=m.idmembre)
        {
            fprintf(copie,"%d \t\t %s \t\t %s \t\t %d \t\t %s \t\t %d \t\t %s \n",m.idmembre,m.nom,m.prenom,m.ddn.jour,m.ddn.mois,m.ddn.annee,m.adresse);
        }
    }
    while(!feof(fichier));
    remove("membre.csv");
    rename("copie.csv","membre.csv");
    fclose(copie);
    fclose(fichier);
}


