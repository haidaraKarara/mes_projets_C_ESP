//MES STRUCTURES
struct Formation 
{
	int codeClasse;
	char *intitule;
	int annee;
};
typedef struct Formation Formation;
 typedef struct listeFormation
{
    Formation f;
	struct listeFormation *suiv;
}*plisteFormation;

struct Membre // Structure qui enregistre un membre.
{
	int numero;
	char *nom ;
	char *prenom;
	char *adresse ;
	Formation *formation;
	int nformation;//savoir le nombre de formation du memebre concerné.
};
typedef struct Membre Membre;
typedef struct liste
{
	Membre m;
	struct liste *suiv;
}*pliste;
// Fonctions relatives à un memebre
Membre creerMembre(int *nombreDeFormation,pliste l);
pliste nouvelleListe(Membre k,pliste s);
void insererDernier(Membre k, pliste *l);
pliste creerListeVide();
int supprimerMembre(pliste 	*l, int key);
Membre chargerListeChainee(FILE *f,char * chaineDeParcours);
int rechercheMembre(int x, pliste a);
void save(pliste l,plisteFormation form);// Enregistrer un membre dans le fichier
int rechercherExistenceId(int x,pliste l);
// Fin fonctions relatives à un membre

//Gestion des utilisateurs
int rechercherLoginMdp(char * x,char* y);
//fin gestion des utilisateurs

// Fonctions relatives aux formations
plisteFormation creerListeVideFormation();
void insererEnQueue(Formation k, plisteFormation *f);
plisteFormation nouvelleListeFormation(Formation k,plisteFormation s);
// Fin fonctions relatives aux formations
void SystemPause();
