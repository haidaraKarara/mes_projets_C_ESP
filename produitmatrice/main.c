/* Ce programme effectue le produit
 * de deux matrices t1 * t2 = t3. */
#include <stdio.h>
#define max 50
int main()
{
	/* Déclaration des tableaux*/
	int t1[max][max],t2[max][max],t3[max][max];
	/* Déclaration des indices */
	int i,j,k;
	/* Déclaration de la taille des tableaux*/
	int l1,c1,c2;
	/* Taille de t1 */
	do
	{
	printf("\nDonner le nombre de ligne du tableau t1 (max = 50) :  ");
	scanf("%d",&l1);
	}
	while ((l1 < 0) || (l1 > max));
	do
	{
	printf("\nDonner le nombre de colonne du tableau t1 (max = 50) :  ");
	scanf("%d",&c1);
	}
	while ((c1 < 0) || (c1 > max ));
	/* Saisie du tableau t1 */
	for(i = 0; i < l1; i++)
	{
		for(j = 0; j < c1; j++)
		{
			printf("t1[%d][%d] =  ",i+1,j+1);
			scanf("%d",&t1[i][j]);
		}
	}
	printf("\n\t\tTableau t1\n");
	/* Affichage du tableau t1 */
	for(i = 0; i < l1; i++)
	{
		for(j = 0; j < c1; j++)
		{
			printf("%3d",t1[i][j]);
		}
		printf("\n");
	}
	/* Taille de t2 */
	printf("\nNombre de ligne du tableau t2 = %d",c1);
	do
	{
		printf("\nDonner le nombre de colonne du tableau t2 (max = 50):  ");
		scanf("%d",&c2);
	}
	while ((c2 < 0) || (c2 > max));
	/* Saisie du tableau t2 */
	for(i = 0; i < c1; i++)
	{
		for(j = 0; j < c2; j++)
		{
			printf("t1[%d][%d] =  ",i+1,j+1);
			scanf("%d",&t1[i][j]);
		}
	}
	printf("\n\t\tTableau t2\n");
	/* Affichage du tableau t2 */
	for(i = 0; i < c1; i++)
	{
		for(j = 0; j < c2; j++)
		{
			printf("%3d",t1[i][j]);
		}
		printf("\n");
	}
	/*profuit de t1 * t2 = t3 */
	for(i = 0; i < l1; i++)
	{
		for(j = 0; j < c2; j++)
		{
            t3[i][j] = 0;
			for(k = 0; k < c1; k++)
			{
				t3[i][j] += (t1[i][k] * t2[k][j]);
			}
		}
	}
	printf("\n %d",t3[0][0]);
	printf("\n\t\tTableau t3 = t1 * t2\n");
	/* Affichage du tableau t3 */
	for(i = 0; i < l1; i++)
	{
		for(j = 0; j < c2; j++)
		{
			printf("%3d",t3[i][j]);
		}
		printf("\n");
	}

	return 0;
}

