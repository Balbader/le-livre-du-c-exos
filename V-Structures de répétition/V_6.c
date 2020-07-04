#include <stdio.h>

int main(void)
{
    int     n;
    int     p;
    int     i;

    printf("Valeur initiale et nombre de valeurs : ");
    scanf("%d %d", &n, &p);

    /********************************************/

    /* Using a for loop */

    for (i = 0; i < p; i++)
    {
        printf("%d\n", n++);
    }

    /********************************************/

    /* Using a while loop */
    /*
    i = 0;
    while (i < p)
    {
        printf("%d\n", n++);
        i++;
    }
    */

    /********************************************/

    /* Using do...while */
    /*
    i = 0;

    do
    {
        printf("%d\n", n++);
        i++;
    } while (i < p);
    */
    return (0);
}
