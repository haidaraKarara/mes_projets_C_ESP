#include <stdio.h>
#define sec_min 60
#define sec_heur 3600
long secondes,minutes,heures,sec_rest,min_rest;

 main()
{
    system("color 4F");
    printf("\n Entrer le nombre de secondes :  ");
    scanf("%ld",&secondes);
    heures= secondes/sec_heur;
    minutes=secondes/sec_min;
    min_rest=minutes%sec_min;
    sec_rest= secondes%sec_min;
    printf("\n %ld h %ld  min %ld  sec \n",heures,min_rest,sec_rest);


}
