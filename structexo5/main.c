/* Programme  un etudiant une tablette. */
#include <stdio.h>
#include <stdlib.h>
#define Max 1
// création d'un etudiant.
struct etudiant
{
    int numero;
    char nom[30],prenom[30];
    float note[5];
};
 typedef struct etudiant etudiant;
etudiant creer_etudiant() // fonctinon de création d'un etudiant.
{
    etudiant d[Max];
    int i,j;
    for (i = 0; i < Max; i++)
    {
        printf("\n\t\tEtudiant %d",i+1);
        printf("\nNumero etudiant :  ");
        scanf("%d",&d[i].numero);
        printf("\nNom :  ");
        scanf("%s",d[i].nom);
        printf("\Prenom :  ");
        scanf("%s",d[i].prenom);
        for (j = 0; j < 5; j++)
        {
            do
            {
                 printf("\nNote %d =  ",j+1);
                scanf("%f",&d[i].note[j]);
                printf("\n");
            }
            while( d[i].note[j] < 0 || (d[i].note[j] > 20));
        }
        printf("\n");
    }
    return d[Max];
}
float moyenne_etudiant(etudiant d[Max]) // fonction pour calculer la moyenne de tous les etudiants.
{
    float moyenne[Max];
    int i,j;
    for(i = 0; i < Max; i++)
    {
        for(j = 0; j < 5; j++)
        {
            moyenne[i] =(d[i].note[j] / 5);
        }
    }
    return moyenne[Max];
}
 void affichage_moyenne(float moyenne[Max])
 {
     int i;
     for(i = 0; i < Max; i++)
     {
          printf("\nEtudiant %d \n",i+1);
          printf("\nMoyenne =  %.3f\n",moyenne[i]);
     }

 }
int main()
{
    system("color 1E");
    etudiant tab_etudiant[Max]; // structure de tableau étudiants.
    float moyenne_etud[Max];// Moyenne de chaque étudiant.
    printf("\n\t\t\tProgramme ETUDIANT");
    printf("\n\Saisie des %d etudiants \n\n",Max);
    tab_etudiant[Max] = creer_etudiant();
    moyenne_etud[Max] = moyenne_etudiant(tab_etudiant);
    affichage_moyenne(moyenne_etud);
    return 0;
}
