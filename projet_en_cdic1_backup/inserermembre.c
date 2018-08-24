#include <stdio.h>
#include <stdlib.h>
#include "insererMembre.h"
int nombreDeFormation = 0;
//FONCTION PERMETTANT DE CREER UN NOUVEAU MEMBRE
Membre creerMembre(FILE *fichier)
{
	Membre m; int i = 0,cherche;
	fichier = fopen("membre.txt", "a+");
	printf("\n\nIdentifiant membre :  ");
	scanf("%d",&m.numero);
	 // Cherchons si le nouveau id_membre existe déjà dans le fichier membre.txt.
	if (fichier == NULL)
	{
		printf("Erreure d'ouverture du fichier ""membre.txt""\n");
		m.numero = -1;
		return m;
	}
	while(fscanf(fichier,"%d\n",&cherche) == 1) //fscanf retourne le nombre de caractère ou d'octet lu
	{
		if(m.numero == cherche)
		{
			m.numero = -2; //l'identifiant existe dèjas
			return m;
		}
	}
	// Passage de l'allocation dynamique.
	m.nom = (char*)malloc(sizeof(char) * 30);
	m.prenom = (char*)malloc(sizeof(char) * 30);
	m.adresse = (char*)malloc(sizeof(char) * 20);
	printf("\nNom :  ");
	scanf("%s",m.nom);
	printf("\nPrenom :  ");
	scanf("%s",m.prenom);
	printf("\nAdresse: ");
	scanf("%s",m.adresse);
	printf("\nDonner le nombre de formation suivies par ce membre : ");
	scanf("%d",&nombreDeFormation);
	//Allocation de mémoire pour les variables : m.formation.codeClasse, m.formation.intitule, m.formation.anne
	m.formation = (Formation*)malloc(sizeof(Formation) * nombreDeFormation);
	//Fin allocation
	for (i=0; i < nombreDeFormation; ++i)
	{
		printf("\nCode classe %d: ",i+1);
		scanf("%d",&m.formation[i].codeClasse);
		m.formation[i].intitule = (char*)malloc(sizeof(char) * 15);
		printf("\nIntitule : ");
		scanf("%s",m.formation[i].intitule);
		printf("\nAnnee : ");
		scanf("%d",&m.formation[i].annee);
	}
	return m;
}

//FONCTION PERMETTANT D'INSERER UN NOUVEAU MEMBRE DANS LE FICHIER DE STOCKAGE membre.txt
int insererMembre()
{
	int i;
	FILE *fichier;
	fichier = fopen("membre.txt", "a+");
	Membre membre = creerMembre(fichier);
	if(membre.numero == -1)
	{
		return -1; // le fichier n'a pas était ouver correctememnt lors de l'appel de la fonction creerMembre()
	}
	else if(membre.numero == -2)
	{
		fclose(fichier);
		return 0; // l'identifiant saisi lors de l'appel de la fonction creeMemebre existait déjàs.
	}
    //Enregistrement du nouveau membre.
	fprintf(fichier,"%d:%s:%s:%s",membre.numero,membre.nom,membre.prenom,membre.adresse);
	for (i = 0; i < nombreDeFormation; ++i)
	{
		fprintf(fichier,":%d:%s:%d",membre.formation[i].codeClasse,membre.formation[i].intitule,membre.formation[i].annee);
	}
	fprintf(fichier,"\n");
	fclose(fichier);
	return 1;
}

//fwrite(&membre,sizeof(membre),1,fichier);
//fread(&ch, sizeof(ch), 1, fichier);
