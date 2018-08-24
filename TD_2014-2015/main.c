#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5, p = 9 ;
    int q ;
    float x ;
        system("color 4f");
    q = n < p ;
    printf("1) q = %4d\n",q);
    q = n == p ;
     printf("2) q = %4d\n",q);
     q = p % n + p > n ;
     printf("3) q = %4d\n",q);
     x = p / n ;
     printf("4) x = %.2f\n",x);
     x = (float) p / n ;
     printf("5) x = %.2f\n",x);
     x = (p + 0.5) / n ;
     printf("6) x = %.2f\n",x);
     x = (int) (p + 0.5) / n ;
      printf("7) x = %.2f\n",x);
      q = n * (p > n ? n : p) ;
      printf("8) q = %4d\n",q);
      q = n * (p < n ? n : p) ;
       printf("9) q = %4d\n",q);
       printf("\n\t\t"); system ("pause");
       int i, j, k;

        i = 20 ; j = 5 ; k = i++ * ++ j ;
         printf("\n\t\t \tNOUVEAU PROGRAMME\n\n");
        printf ("A : i = %d, j = %d, k = %d \n", i, j, k ) ;
        i = 15 ; k = i += 3 ;
        printf ("B : i = %d , k = %d \n", i, k) ;
        i = 3 ; j = 5 ; k= i *= --j ;
        printf ("C : i = %d j = %d k = %d \n", i,j, k) ;


    return 0;
}
