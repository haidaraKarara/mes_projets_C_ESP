#include <stdio.h>
#include <stdlib.h>
#include "insererMembre.h"
int nombreDeFormation = 0;
//Ecrire dans le fichier au moyen d'une liste chainee
void save(pliste l,FILE * f)
{
	/* traiter enregistrement du premier membre */
	fprintf(f,"%d:%s:%s:%s",l->m.numero,l->m.nom,l->m.prenom,l->m.adresse);

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
//Ajout d'un membre dans la liste: les valeur de m ont été déja saisi.
void insererEntete(Membre k, pliste *l)
{
	(*l) = nouvelleListe(k,*l);
}
//FONCTION PERMETTANT DE CREER UN NOUVEAU MEMBRE
Membre creerMembre()
{
	Membre m; int i = 0;
	printf("\n\nIdentifiant membre :  ");
	scanf("%d",&m.numero);
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
//show liste
void showList(pliste l)
{
   if(l != NULL){
	while(l->suiv != NULL){
           printf("[%d]=", l->m.numero);
           l = l->suiv;
        }
        printf("[%s]=EndOfList\n", l->m.nom);
   }
	else
	  printf("Empty list\n");
}
