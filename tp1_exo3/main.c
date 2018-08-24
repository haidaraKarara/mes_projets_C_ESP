#include <stdio.h>
#include <stdlib.h>

  int main()
{

      float somme=0;
      system("color 6f");
      printf("\n--------------------------------------------------------------------------------\n");
      printf("\nEXO3: Somme des 5 premiers termes de la 'serie harmonique': 1 + 1/2 + 1/3 + 1/4 +...+ 1/n\n");
      printf("\n--------------------------------------------------------------------------------\n");
      somme = 1.0  + (1.0/2.0) + (1.0/3.0) + (1.0/4.0) + (1.0/5.0);
      printf("\n La somme des cinq premiers termes est de :  %.2f\n",somme);

return 0;
}
