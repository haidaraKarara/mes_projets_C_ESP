#include <stdio.h>


int main()
{
    system ("color 4f");
    float somme=0,moyenne=0,note,min=20,max=0;
    int i=0,note_sup_10=0,note_inf_10=0;
    printf("\n\t Pour quitter le programme tapez le nombre -1  \n");
    do
    {

    printf("\n\tDonner une note :  ");
    scanf("%f",&note);
      if (note >=0 && note <=20)
        {
            i++;
            somme=somme + note;
            if (min>=note)
                min = note;
            if (max <= note)
                max = note;
            if (note < 10)
                note_inf_10++;
            if (note > 10)
                note_sup_10++;

        }
    }
    while ((note >=0) && (note <=20));
    if ( i>0)
    {

         moyenne = somme/i;
    printf("\n\tLa moyenne des notes est %.2f\n",moyenne);
    printf("\n\tLe maximum des notes est %.2f\n",max);
    printf("\n\tLe minimum des notes est %.2f\n",min);
    printf("\n\tLe nombres de notes superieur a dix est %d\n",note_sup_10);
    printf("\n\tLe nombre de notes inferieur a dix est %d\n",note_inf_10);
    }
    else
    {
        printf("\n\t Pas de note(s) , Pas de moyene\n\n");
    }



 return 0;
}
