#include "matrice.h"

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
