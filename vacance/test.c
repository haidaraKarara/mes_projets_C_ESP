#include <stdio.h>
int main()
{
    int t[] = {1,0,14,-9};
    int i,j,tampon;
    printf("Tableau avant tri");
      for (i = 0; i < 4; i++)
        {
            printf("  %d",t[i]);
        }
        printf("\n\n");
        for(i = 0; i < 4; i++)
        {
             for(j = 4-1; j > 0; j--)
            {
                if (t[j] < t[j-1])
                {
                    tampon = t[j];
                    t[j] = t[j-1];
                    t[j-1] = tampon;
                }
            }

        }

      printf("Tableau après tri");
    for (i = 0; i < 4; i++)
    {
        printf("  %d",t[i]);
    }
    return 0;
}
