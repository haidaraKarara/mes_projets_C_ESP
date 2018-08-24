#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct etudiant
{
char *nom ;
char *prenom ;
float note ;
};

void main()
{
FILE *l ;

struct etudiant *ptr ;
l=fopen("fichier.csv","a+");
if(l==NULL){
printf("Error d'ouverture"); exit(0);
}
else{
    printf("\nNom :  ");

    printf("\nPrenom :  ");
    scanf("%s",(ptr.prenom));
    printf("\nNote :   ");
    scanf("%f",ptr.note);
    fprintf(l,"%s ",(*ptr).nom);
    fprintf(l,"%s ",(*ptr).prenom);
    fprintf(l,"%f ",(*ptr).note);
    fprintf(l,"\n");
    fclose(l);
}
}
