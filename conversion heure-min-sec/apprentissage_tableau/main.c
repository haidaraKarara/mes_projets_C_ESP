#include <stdio.h>
#include <stdlib.h>

int main()
{int i, som, nbm ;
float moy ;
float t[20] ;
for (i=0 ; i<20 ; i++)
{ printf ("donnez la note numéro %d : ", i+1) ;
scanf ("%f", &t[i]) ;
}
for (i=0, som=0 ; i<20 ; i++) som += t[i] ;
moy = som / 20 ;
printf ("\n\n moyenne de la classe : %f\n", moy) ;
for (i=0, nbm=0 ; i<20 ; i++ )
if (t[i] > moy) nbm++ ;
printf ("%d élèves ont plus de cette moyenne", nbm) ;
    return 0;
}
