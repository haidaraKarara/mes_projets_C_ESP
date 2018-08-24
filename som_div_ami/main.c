#include <stdio.h>
#include <stdlib.h>
int somme_div(int nombre);
int validationIterative();
int validation(int nombre);
int main()
{
	validationIterative();

    return 0;
}
int somme_div(int nombre)
{
	int i, somme = 0;
	if (validation(nombre) == 0)
	{
		nombre = validationIterative();
	}

	for (i = 1; i < nombre; ++i)
	{
		if (nombre % i == 0)
		{
			somme += i;
		}
	}

	return somme;
}
int validation(int nombre)
{
	if (nombre < 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int validationIterative()
{
	int nombre;
	do
	{
		printf("Donner un nombre positif\n");
		scanf("%d", &nombre);
	}
	while(nombre < 0);
	return nombre;
}
