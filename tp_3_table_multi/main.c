#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color 4f");
    int i=1,j=1,k=1;
    printf("*********************************************\n");
    printf("*       Programme Table de produit          *\n");
    printf("*********************************************\n");
    printf("\n\n");
    for (k=1; k<=10 ;k++)
    {
         printf("%5d",k);
    }
     printf("\n");
     while (i<=5)
     {
         printf("%d:",i);
         j=i;
         do
         {
             printf("%3d  ",j);
             j=i+j;
         }
         while(j<= i*10);
         i++;
         printf("\n");
     }
     system ("pause");
     int table,inc;
     printf("\nChoisissez une table de multiplication de votre choix :  ");
     scanf("%d",&table);
     for (inc = 1; inc <= 10; inc++)
     {
         printf("\n%d * %d =  %d",table,inc,table * inc);
     }

    return 0;
}
