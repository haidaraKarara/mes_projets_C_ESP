// Création d'un membre
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
	scanf("%d",&m.idMembre);
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
	return m;
}
// Ajouter un membre sur le fichier.
void ajoutmembre()
{
	FILE *l;
	l = fopen("membre.csv", "a");
	if (l == NULL)
	{
		printf("Erreure d'ouverture du fichier\n");
		exit(0);
	}
}
