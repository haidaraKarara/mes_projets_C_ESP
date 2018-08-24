#include "controle_saisie.h"
#define max 50
int lignes()
{
	int l1;
	do
	{
		printf("\nDonner le nombre de lignes(max = 50):  ");
		scanf("%d",&l1);
	}
	while ((l1 < 0) || (l1 > max));
	return l1;
}
int colonnes()
{
	int c1;
	do
	{
		printf("\nDonner le nombre de colonnes(max = 50):  ");
		scanf("%d",&c1);
	}
	while ((c1 < 0) || (c1 > max));
	return c1;
}
