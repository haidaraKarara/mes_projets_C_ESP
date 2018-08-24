#include <stdio.h>
#include <stdlib.h>
#include "insererMembre.h"
int nombreDeFormation = 0;
//Ecrire dans le fichier au moyen d'une liste chainee
void save(pliste l,plisteFormation form,FILE *f)
{
	//int x;
		if (l->suiv == NULL)
		{
			fprintf(f,"%d:%s:%s:%s:",l->m.numero,l->m.nom,l->m.prenom,l->m.adresse);
			form = l->m.formation;		 
			//fprintf(f,"%d:%s:%d:",l->m.formation->f.codeClasse,l->m.formation->f.intitule,l->m.formation->f.annee);
			fprintf(f,"%d:%s:%d:",form->f.codeClasse,form->f.intitule,form->f.annee);
		}
		else
		{
			while(l->suiv != NULL)
			{
				fprintf(f,"%d:%s:%s:%s:",l->m.numero,l->m.nom,l->m.prenom,l->m.adresse);
				form = l->m.formation;		 
		 
				while(form->suiv != NULL)
				{
					fprintf(f,"%d:%s:%d:",form->f.codeClasse,form->f.intitule,form->f.annee);
					form = form->suiv;
				}
				fprintf(f,"\n");
				l = l->suiv;
			}
		}	
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
//Ajout d'un membre dans la liste: les valeur de m ont été déja saisi.
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
//Ajout d'un membre dans la liste: les valeur de m ont été déja saisi.
void insererEntete(Membre k, pliste *l)
{
	(*l) = nouvelleListe(k,*l);
}
//FONCTION PERMETTANT DE CREER UN NOUVEAU MEMBRE
Membre creerMembre(plisteFormation form)
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
	m.formation= (plisteFormation)malloc(sizeof(plisteFormation) * nombreDeFormation);
	//Fin allocation
	for (i=0; i < nombreDeFormation; ++i)
	{
		printf("\nCode classe %d: ",i+1);
		scanf("%d",&m.formation->f.codeClasse);
		m.formation->f.intitule = (char*)malloc(sizeof(char) * 15);
		printf("\nIntitule : ");
		scanf("%s",m.formation->f.intitule);
		printf("\nAnnee : ");
		scanf("%d",&m.formation->f.annee);
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
