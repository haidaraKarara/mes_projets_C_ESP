#include <stdio.h>
int main()
{
    system("color 5f");
    /* D�clarations */
    int p[14][14]; /* matrice r�sultat  */
    int n;         /* degr� du triangle */
    int i, j;      /* indices courants  */
    /* Saisie des donn�es */
    do
    {
        printf("Entrez le degre N du triangle (max.13) : ");
        scanf("%d", &n);
    }
    while (n>13||n<0);
    /* Construction  du triangle: */
    for (i=0; i<=n; i++)
     {
        p[i][i]=1;
        p[i][0]=1;
        for (j=1; j<i; j++)
        p[i][j] = p[i-1][j] + p[i-1][j-1];
     }
  /* Edition du r�sultat */
 printf("Triangle de Pascal de degre %d :\n", n);
 for (i=0; i<=n; i++)
    {
     printf(" N=%2d", i);
     for (j=0; j<=i; j++)
         {
            printf("%5d", p[i][j]);
         }
     printf("\n");
    }
 return 0;
}
