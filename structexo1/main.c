
#include <stdio.h>
//Création d'une structure date
struct date
{
	int jour,mois,annee;
};
//Création d'une structure persone
struct personne
{
	char nom[25];
	int numerodecompte;
	int montant;
	struct date ddn;
};

struct personne personne()
{
	struct personne d;
	printf("\nNom :  ");
	scanf("%s",d.nom);
	printf("\nNuméro de compte :  ");
	scanf("%d",&d.numerodecompte);
	printf("\nMontant :  ");
	scanf("%d",&d.montant);
	printf("\nDate de naissance : jj mm aaaa\n");
	printf("\nJour :  ");
	scanf("%d",&d.ddn.jour);
	printf("\nMois :  ");
	scanf("%d",&d.ddn.mois);
	printf("\nAnnée :  ");
	scanf("%4d",&d.ddn.annee);
	return d;
}
// Définition de la fonction affichage
void affichage(struct personne personne)
{
	printf("\nNom :  %s\n",personne.nom);
	printf("\nNumero de compte :  %d\n",personne.numerodecompte);
	printf("\nMontant :  %d\n",personne.montant);
	printf("\nDate de naissance :  Jour :%5d   Mois :  %5d   Annee:  %5d\n",personne.ddn.jour,personne.ddn.mois,personne.ddn.annee);
}
int main ()
{
    system("color 1E");
	struct personne pers;
	printf("\nBIENVENUE DANS LA BANQUE OUEST AFRICAINE\n\n");
	pers=personne();
	printf("\nVoici les information que vous avez saisies ! \n\n");
	affichage(pers);
	return 0;
}
