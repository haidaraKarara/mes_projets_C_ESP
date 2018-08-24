#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B;
	printf("Introduisez deux nombres entiers : ");
	scanf("%i %i", &A, &B);
 	printf("Division entiere   :  %i\n", A/B);
	printf("Reste              :  %i\n", A%B);
	printf("Quotient rationnel :  %f\n",(float)A/B);
    return 0;
}
