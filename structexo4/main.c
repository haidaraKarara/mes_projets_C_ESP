#include <stdio.h>
#include <stdlib.h>
struct Complexe
{
    float imaginaire;
    float reel;
};
typedef struct Complexe Complexe;
Complexe saisie_complexe()
{
    Complexe d;
    printf("\nDonner la partie reel :  ");
    scanf("%f",&d.reel);
    printf("\nDonner la partie imaginairre :  ");
    scanf("%f",&d.imaginaire);
    return d;
}
float somme_complexe_reel(Complexe C1,Complexe C2)
{
    float som_reel = 0;
    som_reel = C1.reel + C2.reel;
    return som_reel;
}
float somme_complexe_imaginaire(Complexe C1,Complexe C2)
{
    float som_imaginaire = 0;
    som_imaginaire = C1.imaginaire + C2.imaginaire;
    return som_imaginaire;
}
float produit_reel(Complexe C1,Complexe C2)
{
    float prod_reel = 0;
    prod_reel = ((C1.reel * C2.reel) - (C1.imaginaire * C2.imaginaire));
    return prod_reel;
}
float produit_imaginaire(Complexe C1, Complexe C2)
{
    float prod_imaginaire = 0;
    prod_imaginaire = ((C1.reel * C2.imaginaire) + (C1.imaginaire * C2.reel));
    return prod_imaginaire;
}
void affichage(Complexe C1,Complexe C2)
{
    printf("\nC1 + C2 = %.3f + %.3fi ",somme_complexe_reel(C1,C2),somme_complexe_imaginaire(C1,C2));
    printf("\nC1 * C2 = %.3f + %.3fi",produit_reel(C1,C2),produit_imaginaire(C1,C2));
}
int main()
{
    printf("\n\t\t\tCALCUL DE COMPLEXE!\n");
    system("color 1E");
    Complexe C1,C2;// Déclaration de deux complexes C1 et C2.
    printf("\nSaisir le complexe C1 : \n");
    C1 = saisie_complexe();
    printf("\nSaisir le complexe C2 : \n");
    C2 = saisie_complexe();
    somme_complexe_imaginaire(C1,C2);// Calcul de la somme des parties imaginaire de C1 et C2.
    somme_complexe_reel(C1,C2);// Calcul de la somme des parties réels de C1 et C2.
    affichage(C1,C2);// Affichage de la somme de C1 + C2.
    return 0;
}
