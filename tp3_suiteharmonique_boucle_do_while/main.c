#include <stdio.h>

int main()
{
    float i=1,somme=0.0;
    int n;
    system ("color 4f");
    printf("\n\t\t\t\tSUITE HARMONIQUE\n");
    do
    {
        printf("\nDonner un entier positif :  ");
        scanf("%d",&n);
    }
    while(n<0);

        do
        {
             somme = somme + (1/i);
                    i++;
        }
        while (i<=n);

    printf("\nLa somme harmonique de %d est : %.2f\n\n",n,somme);
    return 0;
}

