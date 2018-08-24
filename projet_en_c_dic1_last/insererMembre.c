#include <stdio.h>
#include <stdlib.h>
#include "insererMembre.h"
#include <string.h>
//Permet de rechercher la conformite du login et du mot de passe
int rechercherLoginMdp(char * x,char* y)
{
	 FILE *fichierDeLog = fopen("log.txt","r");
	char * login = (char*)malloc(sizeof(char) * 10);
    char * mdp = (char*)malloc(sizeof(char) * 10);
	fscanf(fichierDeLog,"%s %s",login,mdp);
	 if ( !strcmp(x,login) && !strcmp(y,mdp))
	 {
	 	return 1;
	 	fclose(fichierDeLog);
	 }
 	fclose(fichierDeLog);
	 return 0;
}
//Ecrire dans le fichier au moyen d'une liste chainee
void save(pliste l,plisteFormation form)
{
		int i = 0;
		FILE * f;
		f = fopen("membre.txt","w");
		while(l!= NULL)
			{
				fprintf(f,"%d:%s:%s:%s",l->m.numero,l->m.nom,l->m.prenom,l->m.adresse);		 
				while(i < l->m.nformation)
				{
					fprintf(f,":%d:%s:%d",form->f.codeClasse,form->f.intitule,form->f.annee);
					form = form->suiv;
					i++;
				}
				i = 0;
				fprintf(f,"\n");
				l = l->suiv;
			}
			fclose(f);		
}//Fonction permettant de supprimer un membre
int supprimerMembre(pliste 	*l, int key)
{
	if ((*l) == NULL || rechercheMembre(key,*l) == 0)
	{
		return 0;
	}
	pliste tete = (*l);
	pliste avant =(*l);
	if((*l)->m.numero == key)
	{
		pliste k = (*l);
		(*l) = (*l)->suiv;
		free(k);
		return 1;
	}
	while(tete != NULL && tete->m.numero != key)
	{
		avant = tete;
		tete = tete->suiv;
	}
	if(key == tete->m.numero)
	{
		avant->suiv = tete->suiv;
		free(tete);
		return 1;
	}
	return 0;
}
/*Fonction permettant de charger la liste chainée: extraction des sous chaine d'une ligne du fichier membre. .
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
char * strtok(const char * s, const char * separators);
 
int atoi(const char * s);
long atol(const char * s);
double atof(const char * s);
*/
Membre chargerListeChainee(FILE *f,char * chaineDeParcours)
{
	char separateur[] = ":";
	char *sousChaine;
	int i = 0;
	Membre unMembre;
	unMembre.nom = (char*)malloc(sizeof(char) * 30);
	unMembre.prenom = (char*)malloc(sizeof(char) * 30);
	unMembre.adresse = (char*)malloc(sizeof(char) * 20);
	unMembre.formation= (Formation*)malloc(sizeof(Formation) * 5);//supposoons qu'il a fait 5 formations aux max.
	sousChaine = strtok(chaineDeParcours,separateur);
	unMembre.numero = atoi(sousChaine);
	sousChaine = strtok(NULL, separateur);//pour pouvoir extraire le prochain souschaine de la mm ligne.
	unMembre.nom = sousChaine;
	sousChaine = strtok(NULL, separateur);
	unMembre.prenom = sousChaine;
	sousChaine = strtok(NULL, separateur);
	unMembre.adresse = sousChaine;
	sousChaine = strtok(NULL, separateur);
	do
	{
		unMembre.formation[i].codeClasse = atoi(sousChaine);
        sousChaine = strtok(NULL, separateur);
		unMembre.formation[i].intitule = (char*)malloc(sizeof(char) * 15);
        unMembre.formation[i].intitule = sousChaine;
        sousChaine = strtok(NULL, separateur);
        unMembre.formation[i].annee = atoi(sousChaine);
	    sousChaine = strtok(NULL, separateur);
        i = i + 1;//A la sortie nombreDeFormation = nombre de formation suivi par le membre.
    }while(sousChaine !=NULL);    		        
	//initialisation du champ nombre de formation suivi par un membre
	unMembre.nformation = i;	    
	return unMembre;
}
//Créer une nouvelle liste  vide  de formation
plisteFormation creerListeVideFormation()
{
	plisteFormation f = (plisteFormation)malloc(sizeof(struct listeFormation) * 10);
	f = NULL;
	return f;
}
//Créer une nouvelle liste de formation
plisteFormation nouvelleListeFormation(Formation k,plisteFormation s)
{
	plisteFormation n = (plisteFormation)malloc(sizeof(struct listeFormation));
	n->f = k;
	n->suiv = s;
	return n;
}
//Ajout d'une formation dans la liste de formation: les valeur de m ont été déja saisi.
void insererEnQueue(Formation k, plisteFormation *f)
{  
    plisteFormation n =nouvelleListeFormation(k,NULL);
	if(*f==NULL) *f=n ;
	else {
		plisteFormation f1=*f;
		while(f1->suiv!=NULL)
		{
			f1=f1->suiv;
		}
		f1->suiv=n;
	}
}
//creation d'une liste vide
pliste creerListeVide()
{
	pliste l = (pliste)malloc(sizeof(struct liste));
	l = NULL;
	return l;
}
//Créer une nouvelle liste
pliste nouvelleListe(Membre k,pliste s)
{
	pliste n = (pliste)malloc(sizeof(struct liste));
	n->m = k;
	n->suiv = s;
	return n;
}
//Ajout d'un membre dans la liste
void insererDernier(Membre k, pliste *l)
{
	pliste n = nouvelleListe(k,NULL);
	if (*l == NULL)
	{
		*l = n;
	}
	else
	{
		pliste l1 = *l;
		while(l1->suiv != NULL) l1 = l1->suiv;
		l1->suiv = n;
	}
}
// Fonction permettant de rechercher un membre
//Recherche dans une liste
int rechercheMembre(int x, pliste a)
{
	while(a != NULL)
	{
		if (a->m.numero== x) return 1;
		a = a->suiv;
	}
	return 0;
}
//FONCTION PERMETTANT DE CREER UN NOUVEAU MEMBRE
Membre creerMembre(int *nombreDeFormation,pliste l)
{
	*nombreDeFormation = 0;
	Membre m; int i = 0;
	int aide = 1;
	char aideStdin[2];
	int numeroMembre;
	do
	{
		if (aide == 0)
		{
			printf("\nCet Identifiant existe deja ! \n");
		}
		printf("\n\nIdentifiant membre :  ");
		scanf("%d",&numeroMembre);
		aide = rechercherExistenceId(numeroMembre,l);
	}while( aide == 0);
	m.numero = numeroMembre;
	m.nom = (char*)malloc(sizeof(char) * 30);
	m.prenom = (char*)malloc(sizeof(char) * 30);
	m.adresse = (char*)malloc(sizeof(char) * 30);
	printf("\nNom :  ");
	scanf("%s",m.nom);
	printf("\nPrenom :  ");
	scanf("%s",m.prenom);
	printf("\nAdresse: ");
	scanf("%s",m.adresse);
	printf("\nDonner le nombre de formation suivies par ce membre : ");
	scanf("%d",nombreDeFormation);
	//Allocation de mémoire pour les variables : m.formation.codeClasse, m.formation.intitule, m.formation.anne
	m.formation= (Formation*)malloc(sizeof(Formation) * (*nombreDeFormation));
	//Fin allocation
	for (i=0; i < *nombreDeFormation; ++i)
	{
		printf("\nCode classe %d: ",i+1);
		scanf("%d",&m.formation[i].codeClasse);
		m.formation[i].intitule = (char*)malloc(sizeof(char) * 15);
		printf("\nIntitule : ");
		scanf("%s",m.formation[i].intitule);
		//fgets(m.formation[i].intitule, sizeof(m.formation[i].intitule),stdin);
		printf("\nAnnee : ");
		scanf("%d",&m.formation[i].annee);
	}
	m.nformation = *nombreDeFormation; // On stocke le nombre de formation du membre dans " nformation "
										// qui est une variable qui lui est propre.
	return m;
}
//Fonction permettant de rechercher l'existence d'un Id
int rechercherExistenceId(int x,pliste l)
{
	while(l != NULL)
	{
		if (l->m.numero== x) return 0;
		l = l->suiv;
	}
	return 1;
}
//Fonction permettant de faire une pause sous linux: that's cool !
void SystemPause()
{
   char magickey;
   fflush(stdin);
   printf("\t\tAppuyez sur une touche pour continuer...\n");
   scanf("%c", &magickey);
   magickey = getc(stdin);
   system("clear");
}
