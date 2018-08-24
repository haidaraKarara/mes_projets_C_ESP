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
typedef struct liste
{
	Membre m;
	struct liste *suiv;
}*pliste;
/*Fonction permettant d'inserer un nouveau membre.*/
Membre creerMembre();

pliste nouvelleListe(Membre k,pliste s);

void insererEntete(Membre m, pliste *l);

pliste creerListeVide();

void save(pliste l,FILE *f);

void showList(pliste l);

//void appel(FILE *f);

