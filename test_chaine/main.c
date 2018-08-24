#include <stdio.h>
#include <stdlib.h>
main()
{
 FILE *FP;
 FP = fopen("C:\\p\\fonction.txt", "r");
 if (!FP)
    {
     printf("Impossible d'ouvrir le fichier\n");
     exit(-1);
    }
 while (!feof(FP))
     putchar(fgetc(FP));
 fclose(FP);
 return 0;
}
