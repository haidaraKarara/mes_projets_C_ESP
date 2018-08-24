#include <stdio.h>
int estpremier(int n);
int main()
{
    system("color 5f");
	int nombre,resultat;
	printf("\n\t\tCe programme vos permet de s'avoir si un nombre est premier\n\n");
	printf("\nDonner un nombre de votre choix :  ");
	scanf("%d",&nombre);
	if(estpremier(nombre) == 1)
	{
		printf("\n\tLe nombre %d est premier !\n\n",nombre);
	}
	else
	{
		printf("\n\tLe nombre %d n'est pas premier ! \n\n",nombre);
	}
}
int estpremier(int n)
{
	int i,compt = 0;
	 for(i = 2; i < n; i++)
	 {
	 	if ( (n % i) == 0)
	 	{
	 		compt++;
	 		break;
	 	}
	 }
	 if (compt != 0)
	 {
	 	return 0;
	 }
	 else
	 {
	 	return 1;
	 }
	 return 0;
}
