#include <stdio.h>

 int main()
{
 int A;
 system("color 4f");
 printf("\n\n\t\t Taper un caractere :   ");
 A = getch(); /* "getch" permet de r�cup�rer un appui sur le clavier.Retenez le bien.*/
  printf("\n\n\t\t Le caractere %c a le code ASCII %d  \n\n", A, A);/* en C, on a la possibili� de convertir
                                                    les int en char et vice-versa. le langage C confond
                                        facilement un caract�re avec la valeur (enti�re) du code qui le repr�sente.*/
 return 0;
}
