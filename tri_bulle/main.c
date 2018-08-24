/* Programme tri d'un tableau */
#include <stdio.h>
#define max 50
void tri(int a[max], int taille)
{
	int i,tampon, permutation = 1;
	while (permutation == 1)
	{
		permutation = 0;
		for(i=0; i < taille - 1; i++)
		{
			if (a[i] > a[i +1])
			{
				tampon = a[i];
				a[i] = a[i + 1];
                a[i + 1] = tampon;
				permutation = 1;
			}
		}
	}
}
int main()
{
    system("color 1E");
	int i,t1[max],taille;
	do
	{
		printf("\nDonner la taille du tableau [max 50] :  ");
		scanf("%d",&taille);
	}
	while ((taille < 0) || (taille > max));
	// Remplissage du tableau
	for(i = 0; i < taille; i++)
	{
		printf("\nElement[%d] =  ",i+1);
		scanf("%d",&t1[i]);
	}
	// Trions le tableau t1: tri croissa
	tri(t1,taille);
//	 Ceci est un tri par séléction
	/*int tampon; int posmin;int k,l;
	for(k= 0; k < taille -1; k++)
    {
        posmin = k;
        for( l= k+1; l < taille; l++)
        {
            if(t1[l] < t1[posmin])
            {
                posmin = l;
            }
        }
        tampon = t1[posmin];
        t1[posmin] = t1[k];
        t1[k] = tampon;
    }*/
	// Affichage
	printf("\n\t Apres avoir trier le tableau \n\n");
	for (i = 0; i < taille; i++)
    {
        printf("%7d",t1[i]);
    }
    return 0;
}
