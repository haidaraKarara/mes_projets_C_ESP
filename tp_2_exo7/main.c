#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* programme triagle isoc�le */

                                                system ("color 4f"); /* Fond d'�cran*/
  int saisie, tour, espace, etoile = 1, i;  /*D�claration des variables */

  printf("choisisez un nombre de ligne(s)  : ");
  scanf("%d", &saisie);
  tour = saisie;
  espace = saisie;
  /* utilisation de trois boucles for pour pouvoir r�aliser le triangle isoc�le.*/
  for(; tour > 0; tour--)
  {
            for(i =0; espace != i; ++i)
                  {
                  printf(" ");
                  }
            espace--;

            for(i =0; i < etoile; ++i)
                  {
                  printf("*");
                  }
            etoile+=2;

            printf("\n");
  }
return 0;
}

