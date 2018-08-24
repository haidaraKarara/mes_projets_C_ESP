#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>

typedef struct date
{
	int jour;
	char* mois;
	int annee;
}date;
/* Description de la Structure d'une Formation*/
typedef struct formation
{
    int    code;
    char   *intitule;
    int    annee;
}formation;

/* Description de la Structure d'un membre*/
typedef struct membre
{
	int  numero;
    char *nom;
    char *prenom;
    char *adresse;
    date ddn;
    formation *form;

}membre;

typedef struct list{
	membre content;
	struct list* suiv;
}*liste;

void menu ();
void gestionMembres ();
membre ajout_membre ();
void   membre_fichier();
void modification_membre ();
void suppression_membre ();
int recherche_membre(int id);
int nombre_de_membre=0;
int id_search;
int id_modif;
int nbreForm;
liste creerListe()
{
	return NULL;
}
liste insererEnQueue(liste l, membre x){
	liste p = (liste)malloc(sizeof(struct list));
        p->content = x;
	liste tete = l;
	while(tete->suiv != NULL)
		tete = tete->suiv;
	tete->suiv = p;
        p->suiv = NULL;
	return l;
}
liste insererEnTete(liste l, membre x){
	liste p = (liste)malloc(sizeof(struct list));
	p->content = x;
	p->suiv = l;
	l = p;
	return l;
}
/******************Menu_Principal************************/
void menu ()
{

	membre memb;
	int choix;
    printf("*************** MENU PRINCIPAL ****************** \n");
	printf("1 :\n\n AJOUT MEMBRE \n");
	printf("2 :\n\n RECHERCHE \n");
	printf("3 :\n\n MODIFICATION \n");
	printf("4 :\n\n SUPRESSION \n");
	printf("5 :\n\n QUITTER \n");
	printf("\n\n\n TAPER VOTRE CHOIX :");
	scanf("%d",&choix);
	switch (choix) {
		do{
             case 1 :
              {
                   memb=ajout_membre();
                   membre_fichier(memb,"membres.txt");
                   menu();
              }
                break;

             case 2:

               {
                   printf("DONNEZ L'ID A CHERCHER :");
                   scanf("%d",&id_search);
                   recherche_membre(id_search);
               }
               menu ();
               break;
             case 3 :
               {
                    modification_membre();
               }
                 menu ();
                 break;
             case 4:
                {
                    suppression_membre();
                }
                menu ();
                break;
            case 5 :
             {
                  EXIT_SUCCESS;
             }
              break;
              default : printf("le choix est incorrect !");
		  }while (choix<1 || choix>5);
	}
}
/*********************Ajouter un Membre*******************/
membre ajout_membre()
{
    membre memb;
	printf("Donner le numero du membre: ");
	scanf("%d",&memb.numero);

	printf("Donner le nom du membre: ");
	memb.nom=(char *)malloc(sizeof(char)*30);
	scanf("%s",memb.nom);

	printf("Donner le prenom du membre: ");
	memb.prenom=(char *)malloc(sizeof(char)*30);
	scanf("%s",memb.prenom);

	printf("Donner ddn du membre: \n");
	printf("jour: ");
	scanf("%d",&memb.ddn.jour);


	printf("mois: ");
	memb.ddn.mois=(char *)malloc(sizeof(char)*15);
	scanf("%s",memb.ddn.mois);

	printf("annee: ");
	scanf("%d",&memb.ddn.annee);

	printf("Donner l'adresse du membre: ");
	memb.adresse=(char *)malloc(sizeof(char)*30);
	scanf("%s",memb.adresse);
	printf("Donner le nombre de formations a saisir :");
	scanf("%d",&nbreForm);
	int i=0;
	memb.form=(formation*)malloc(nbreForm*sizeof(struct formation));
	for(i=1;i<=nbreForm;i++)
    {
        printf("Donner le code de la formation %d : ",i);
        scanf("%d",&memb.form[i-1].code);
        memb.form[i-1].intitule=(char *)malloc(sizeof(char)*15);
        printf("Donner l'intitule de la formation %d :",i);
        scanf("%s",memb.form[i-1].intitule);
        printf("Donner l'annee de la formation %d :",i);
        scanf("%d",&memb.form[i-1].annee);
    }
	return memb;
}
/*********************Membre vers Fichier *******************/
void membre_fichier(membre memb,char* fichier)
{
    FILE *l;
	l=fopen(fichier,"a+");
	if(l==NULL){
		printf("Error d'ouverture du fichier membre");
		exit(0);
	}
	fprintf(l,"%d:%s:%s:%d/%s/%d:%s:", memb.numero, memb.nom, memb.prenom, memb.ddn.jour, memb.ddn.mois, memb.ddn.annee, memb.adresse);
    int i=0;
    for(i=0;i<nbreForm;i++)
    {
        fprintf(l,"%d:%s:%d",memb.form[i].code,memb.form[i].intitule,memb.form[i].annee);
    }
    fprintf(l,"\n");
    printf("Enregistrement reussi");
    system("pause");
	fclose(l);
}
int main()
{
    printf("*****************************BIENVENUE DANS NOTRE ASSOCIATION********************************* \n");
    menu();
    return 0;
}
