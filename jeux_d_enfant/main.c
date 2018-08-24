#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre=1,entree,reste=0;
    char quitter;
    printf("\n\t\tCeci est un programme de jeux \n");
    printf("\nLe but de cet exercice est de dire si le nombre est pair ou impair !\n");
    printf("\n\tPour répondre taper P = pair ou I = impair\n");
    printf("\t\t\tTOP C'EST PARITE\n");
    system ("pause");
    do
    {
            printf("\n %d \n",nombre);
            printf("\n pair ou impair?  ");
            scanf("%c",&entree);
            reste = nombre;
            (reste=reste%2);
            if  ( (reste=0) && ( entree = ('P'|| 'p' )) ) ;
            {
                printf("\n\nBRAVO!\a\n");
            }

            if ( (reste = 0) && (entree = ('P' ||'p')) )
                            {
                                printf("\n\nFAUX\n");
                            }

            if ( (reste !=0) && (entree = ('i' || 'i')) )
                {
                        printf("\n\nBRAVO!\a\n");
                }

            if ( (reste!=0) && (entree = ('P' || 'p')) )
                {
                        printf("\n\nFAUX\n");
                }

            nombre++;
            printf("\nVoulez-vous continuez?\n");
            scanf("%c",quitter);
    }
    while(quitter = 'o' || 'O');


    printf("\n\t\t\tA plus tard\n");




    return 0;
}
