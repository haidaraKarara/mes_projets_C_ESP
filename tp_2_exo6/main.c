#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* programme triagle isocèle */

                                                system ("color 4f"); /* Fond d'écran*/
  int saisie, tour, espace, etoile = 1, i;  /*Déclaration des variables */

  printf("choisisez un nombre de ligne(s)  : ");
  scanf("%d", &saisie);
  tour = saisie;
  espace = saisie;
  /* utilisation de trois boucles for pour pouvoir réaliser le triangle isocèle et réctangle.*/
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
