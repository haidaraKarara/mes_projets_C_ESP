#include <stdio.h>
#define annee_en_cours 2015

int main()
{
    system("color 4f");
    int annee,age;  // Déclaration des variables//
    annee = (int*)malloc(sizeof(int));
    age = (int*)malloc(sizeof(int));
    printf("\n\tEntrer votre annee de naissance sur 4 chiffres :    ");
    scanf("%4d",&annee);
    age = annee_en_cours - annee; // Calcul de l'âge//
    printf("\n\t\tVotre age actuel est  :   \n\n");
    printf("\nEn decimal : %d ans\a\n",age);
    printf("\n\tEn octal  :  %o ans\n",age);
    printf("\n\t\tEn hexadecimal:  %x ans\n\n",age);
    system("pause");
    return 0;
}
