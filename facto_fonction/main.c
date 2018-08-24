#include <stdio.h>
int validationiterative();
int factoriel(int nbr);
int main()
{
    system("color 4f");
	int nbr,resultat;
	nbr = validationiterative();
	resultat = factoriel(nbr);
	printf("\n\tLe factoriel du nombre %d est : %d \n",nbr,resultat);
	return 0;
}
int validationiterative()
{
	int x;
	do
	{
		printf("\nDonner un nombre positif :  ");
		scanf("%d",&x);
	}
	while (x < 0);
	return x;
}
int factoriel(int nbr)
{
	int facto = 1;


	while(nbr != 1)
	{
		facto *= nbr;
		nbr--;
	}
	return facto;
}
