#include <stdio.h>
#include <stdlib.h>
int factoriel(int x)
{
	int facto = 1,i;
	for(i = 2; i <= x; i++)
	{
		facto = facto * i;
	}
	return facto;
}
int main(int argc, char const *argv[])
{
	int nombre = 0,i,facto = 0;
	system("color 1E");
	printf("\n\tCe programme permet de calculer le factoriel d'un nombre entier !");
	printf("\n\n\n");
	do
	{
		printf("\n\t Donner un nombre entier :  ");
		scanf("%d",&nombre);
	}
	while(nombre < 0);
	facto = factoriel(nombre);
	printf("\n\t Le factoriel de %d est %d ",nombre,facto);
	printf("\n\n\n");
	system("pause");
	printf("\n\t\t\t\tAu revoir !");
	return 0;
}
