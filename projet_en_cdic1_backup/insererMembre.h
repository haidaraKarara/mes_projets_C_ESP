//MES STRUCTURES
struct Formation // structure date de naissance.
{
	int codeClasse;//un tableau pouvant contenir 5 chaines de caractères .
	char *intitule;
	int annee;
};
typedef struct Formation Formation;
struct Membre // Structure qui enregistre un membre.
{
	int numero;
	char *nom ;
	char *prenom;
	char *adresse ;
	Formation *formation;
};
typedef struct Membre Membre;
/*Fonction permettant d'inserer un nouveau membre.*/
Membre creerMembre(FILE *fichier);
int insererMembre();

