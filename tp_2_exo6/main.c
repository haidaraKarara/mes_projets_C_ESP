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
  /* utilisation de trois boucles for pour pouvoir r�aliser le triangle isoc�le et r�ctangle.*/
  for(tour; tour != 0; tour--)
  {
            for(i =0; espace != i; ++i)
                  {
                  printf(" ");
                  }
            espace--;

            for(i =0; etoile != i; ++i)
                  {
                  printf("*");
                  }
            etoile+=1;

            printf("\n");
  }
return 0;
}
