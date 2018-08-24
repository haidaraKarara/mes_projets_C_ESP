#include <stdio.h>
# include <math.h>
int main()
{
    int ascii;
    system("color 4f");
    //Ce programme permet de donner le code Ascii d'un caractère saisi par l'utilisateur//
    printf("\n\t\tSaisir un caractère de votre choix :  ");
    ascii = getch();
        printf("\n\n\tLe caractère << %c >> que vous avez saisi a pour code ASCII %d\n\a",ascii,ascii);
        // ceci est un nouveau programme //

    printf("\t\t"); system("pause");
     system("color 5f");
        const int pi =3.14;
         float r; float d,p,s;

        printf("\t\n--------------------------------------------------------------------------------\n");
        printf("\t                       Programme cercle\n                   ");
        printf("\t\n--------------------------------------------------------------------------------\n");
        printf(" Donner le rayon du cercle :  ");
        scanf(" %fl",&r);
        d = r*2;
         p = d * pi;
         s = (r *r * pi);
        printf("\nUn cercle de rayon %.3f a pour diamètre %.3f ,pour circonférnce %.3f et pour surface %.3f\n\n",r,d,p,s);

                    /* Ceci est un nouveau programme */

                  printf("\t\t");  system("pause");
                  system("color 5f");
                  printf("\n--------------------------------------------------------------------------------\n");
                  printf("\n              Programme Equation second degre: ax2 + bx + c = 0 avec (a#0)\n");
                  printf("\n--------------------------------------------------------------------------------\n");
                  double a,b,c,delta,sol1,sol2;
                  printf(" Donner les coefficients a,b et c  \n");
                  do
                  {
                  printf("\n a =  ");
                  scanf("%lf",&a);
                  }
                  while ( a == 0);

                  printf("\n b =  ");
                  scanf("%lf",&b);
                  printf(" \n c =  ");
                  scanf("%lf",&c);
                   delta = ((b*b) - ( 4 * a * c));
                   sol1= (-b -sqrt(delta)) / (2 * a);
                   sol2 = ( -b + sqrt(delta)) / (2 * a);


                  if (delta >0)
                  {

                        printf("\tL'ensemble des solutions est : {  %.3lf  , %.3lf }\n\a",sol1,sol2);
                  }
                 else if (delta == 0)
                  {
                    printf("\tL'equation n'admet qu'une seule solution  x = %lf\n\a",sol1);
                  }
                   else if (delta <0)
                  {
                    printf("\tL'equation n'admet aucune solution  \n\a");
                  }


                 printf("\t\t"); system("pause");
                  system("color 6f");
                  printf("\n------------------------------------------------------------------------\n");
                  printf("\n\n                     Programme utilisant l'instruction CONTINUE \n");
                  printf("\n---------------------------------------------------------------------------------\n");






    printf("\n\n\t\t\t\ FIN DE PROGRAMME !\n\n\n");

    return 0;
}
