#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *pronom[6] = {"je","tu","il","nous","vous","ils"};
	char *terminaison[6] = {"e","es","e","ons","ez","ent"};
	char verbe[20];
	int i,lc = 0; // Longueur du verbe.
	do
	{
		printf("\nEntrer un verbe du premier groupe :  ");
		scanf("%s",verbe);
		lc = strlen(verbe);
	}
	while(verbe[lc -2] != 'e' || verbe[lc - 1] != 'r'); // Contrôle de saisie du verbe du premier groupe.
	verbe[lc -2] = '\0';
	// traitement.
	for (i = 0; i < 6; ++i)
	{
		printf("\n%s %s%s ",pronom[i],verbe,terminaison[i]);
	}
	return 0;
}