#include <stdio.h>
#include <stdlib.h>
struct Ddn
{
	int jour;
	int mois;
	int annee;
};
typedef struct Ddn Ddn;
struct Membre
{
	int idmembre;
	char *nom, *prenom;
	Ddn ddn;
    char *adresse;
};
typedef struct Membre Membre;
void initialiser_membre(Membre *membre); // prototype de la fonction membre.
void gerer_membre(Membre *membre);


int main()
{

    return 0;
}
void initialiser_membre(Membre *membre) // Définition de la fonction membre.
{
	(*membre).idmembre = 0;
	(*membre).nom = "";
	(*membre).prenom = " ";
	(*membre).ddn.jour = 0;
	(*membre).ddn.mois = 0;
	(*membre).ddn.annee = 0;
	membre -> adresse = " ";
}

void gerer_membre(Membre *membre)
{
    prenom = (char*) malloc(sizeof((char) * 30);
    nom = (char*) malloc(sizeof((char) * 30) ;
    adresse = (char*) malloc(sizeof((char) * 30);
	int nombre_de_personne = 0; // variable pour demander à l'utilisateur le nombre de memre à enregistrer.
	FILE* fichier = NULL;
	fichier = fopen("membre.csv", "a"); // ouverture du fichier membre;
	if(fichier != NULL) // on peut écrire dans le fichier membre.
	{

		printf("\nIdmembre :  ");
		fscanf("%s",nom );
		printf("\nNom :  ");
		scanf("%s",membre.nom);
		printf("\nPrenom :  ");
		scanf("%s",membre.prenom);
		printf("\nDate de naissance ");
		printf("\nJour :  ");
		scanf("%d",&(membre.ddn.jour));
		printf("\nMois :  ");
		scanf("%d",&(membre.ddn.mois));
		printf("\nAnnee :  ");
		scanf("%d",&(membre.ddn.annee));
		printf("\n");
		fclose(fichier);
	}
	else
	{
		printf("\n\t\tImpossible d'ouvir le fichier.");
	}

}
