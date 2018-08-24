#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct Ddn // structure date de naissance.
{
	int *jour;
	char *mois;
	int *annee;
};
typedef struct Ddn Ddn;
struct Membre // Structure qui enregistre un membre.
{
	int idMembre;
	char *nom ;
	char *prenom; // Initialisation.
	Ddn ddn;
	char * adresse ;
};
typedef struct Membre Membre;
Membre creermembre(); // Cette fonction permet de créer et de renvoyer un membre.
void ajoutmembre(); // Ne retournant rien,cette fonction ecrit un membre sur le fichier.

