#include <stdio.h>
#include <stdlib.h>
#define max 5
#define maxA 10
int main()
{
    char chaine[20] = "";// chaine entre� par l'utilisateur;
    char *p1,*p2; // pointeurs logiques
    int trouve; // indice
    printf("\nEntrer une chaine de caract�re : ");
    gets(chaine);
    // Pla�ons le pointeur p1 sur le dernier caract�re de la chaine de caract�re.
    for(p1=chaine; *p1;p1++);
    trouve = 1;
    p1--; // parce que les chianes sont compte�s � partir de z�ro.
    // Boucle pour voir si la chaine est un palindrome.
    for(p2=chaine; (trouve && p2 < p1);p2++,p1--)
    {
        if(*p1 != *p2)
        {
            trouve = 0;
        }
    }
    if (trouve)
    {
        printf("\nLa chaine \"%s\" est un plindrome",chaine);
    }
    else
    {
        printf("\nLa chaine \"%s\" n'est pas un palindrome\n",chaine);
    }

    return 0;
}


