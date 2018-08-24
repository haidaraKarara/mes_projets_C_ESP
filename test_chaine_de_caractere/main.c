#include <stdio.h>
#include <string.h>
int main(void)
{   char nom[2O+1],prenom[20+1],ville[25+1];
    printf ("votre ville : ");
    gets (ville) ;
    printf ("votre nom et votre prénom : ");
    scanf ("%s %s",nom,prenom) ;
    printf ("bonjour Mr %s %s qui habitez à ",prenom,nom);
    puts (ville) ;
    return 0;
}
