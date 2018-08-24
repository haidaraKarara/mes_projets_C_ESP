/* SUITE FIBONACCI */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("color 4f");
    int i,nombre[30],n;
    printf("\n Combien de termes de la suite de fibonacci voulez-vous afficher :  ");
    scanf("%d",&n);
    printf("\nVoici les %d premier termes de la suite de fibonacci ! ",n);
    nombre[0] = 1;
    nombre[1] = 1;
    for (i = 2; i < n; i++)
    {
        nombre[i] = nombre[i - 1] + nombre[i - 2];
    }
    printf("\n f[0] = 1");
    printf("\n f[1] = 1");
    for (i = 2; i < n; i++)
    {
        printf("\n f[%d] = %d",i,nombre[i]);
    }

    return 0;
}
