#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i;
	system("color 4f");
	for ( i= 65; i <= 90; i++)
	{
		printf("\n Caractère : '%c'     Code : '%d'     Code hexa : '%x' ",i,i,i);
	}
	return 0;
}
