#include <stdio.h>

#define  N 5

int main(void)
{
    int t[N] = {1, 30, 120, 20, 40};
    int som;
    int max;
    int i;
     
    som = 0;
    max = t[0];    

    for (i = 0; i < N; i++)
    {
        som = som + t[i];
        printf("%d\n", t[i]);
    }

    printf("\n%d\n", som);
    
    
    for (i = 1; i < N; i++)
    {
        if (t[i] > max)
            max = t[i];
    }
    printf("%d\n", max);   












    
    /*
    int nombres[N];
    int carre;
    int i;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++)
        scanf("%d",&nombres[i]);

    printf("NOMBRE CARRE\n");

    for (i = 0; i < 5; i++)
    {
        carre = nombres[i] * nombres[i];
        printf("%6d %5d\n", nombes[i], carre);
    } 
    */
    /*
    int     tabA[] = {0};
    int     tabB[N] = {0};
    int     i;
    
    for (i = 0; i < N; i++)
    {
        printf("Enter Value [%d]: ", i);
        scanf("%d", &tabB[i]);
    }
    for (i = 0; i < N; i++)
    {
        printf("TabA position [%d]:  ", i);
        tabA[i] = tabB[i];
        printf("%d\n", tabA[i]);
    }
    */

    return 0;
}

