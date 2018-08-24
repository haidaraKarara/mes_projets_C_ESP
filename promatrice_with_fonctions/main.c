/*produit matrice avec les fonctions*/
#include <stdio.h>
#define max 50
int lignes();
int colonnes();
void affichage(int l,int c,int t[max][max]);
void saisie(int ligne,int col,int tab[max][max]);
void produitmatriciel(int x,int y,int z,int b[max][max],int n[max][max],int e[max][max]);
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
int lignes()
{
	int l1;
	do
	{
		printf("\nDonner le nombre de lignes(max = 50):  ");
		scanf("%d",&l1);
	}
	while ((l1 < 0) || (l1 > max));
	return l1;
}
int colonnes()
{
	int c1;
	do
	{
		printf("\nDonner le nombre de colonnes(max = 50):  ");
		scanf("%d",&c1);
	}
	while ((c1 < 0) || (c1 > max));
	return c1;
}
void affichage( int l,int c,int t[max][max])
{
	int i,j;
	for(i = 0; i < l; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("%7d",t[i][j]);
		}
		printf("\n");
	}
}
void saisie(int ligne,int col,int tab[max][max])
{
	int i,j,h[max][max];
	for(i = 0; i < ligne; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("\nElément[%d][%d] =  ",i + 1,j + 1);
			scanf("%d",&h[i][j]);
			tab[i][j] = h[i][j];
		}
	}
}
void produitmatriciel(int x,int y,int z,int b[max][max],int n[max][max],int e[max][max])
{
	int i,j,k;
	for(i = 0; i < x; i++)
	{
		for(j = 0; j < y; j++)
		{
			for (k = 0; k < z; k++)
			{
				b[i][j] += n[i][k] * e[k][j];
			}
		}
	}
}
