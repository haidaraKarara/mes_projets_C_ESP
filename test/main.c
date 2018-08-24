#include <stdio.h>
#include <stdlib.h>
#define max 50
int main()
{
    /* déclaration des variables */
	system("color 6f");
	int l1,c1,c2;
	int t1[max][max],t2[max][max],t3[max][max];
	printf("\t\t\tCalcul d'un produit matriciel !\n");
	printf("\n\tSaisir la taille de la matrice t1\n");
	l1 = lignes();
	c1 = colonnes();
	/* Saisie de la matrice t1 */
	saisie(l1,c1,t1);
	printf("\n\tSaisir la taille de la matrice t2\n");
	printf("\nNombre de lignes = %d",c1);
	c2 = colonnes();
	/* Saisie de la matrice t2 */
	saisie(c1,c2,t2);
	/* Affichage des matrices */
	printf("\n\t\tMatrice t1\n");
	affichage(l1,c1,t1);
	printf("\n\t\tMatrice t2\n");
	affichage(c1,c2,t2);
	/* produit matriciel */
	/* t1 * t2 = t3*/
	produitmatriciel(l1,c2,c1,t3,t1,t2);
	/*Affichage de la matrice résultante */
	printf("\n\t\tMatrice t3 = t1 * t2\n");
	system("color 1E");
	affichage(l1,c2,t3);
    return 0;
}

