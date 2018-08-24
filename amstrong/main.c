#include <stdio.h>
int main()
{
	/* declaration des variables */
	system ("color 4f");
	int nombre1=0,nombre2=0;
	int x=0,y=0,somme = 0;
    printf("\nDonner un entier :  ");
    scanf("%d",&nombre1);
    nombre2 = nombre1;
    while (nombre1 != 0)
    {
        x = nombre1 % 10;
        y = x*x*x;
        somme += y;
        nombre1 = nombre1 / 10;
    }
    if (nombre2 == somme)
    {
         printf("\n ce nombre  est un nombre Amstrong !\n");
    }
    else
    {
        printf("\nCe nombre n'est pas un nombre Amstrong!");
    }
	return 0;
}
