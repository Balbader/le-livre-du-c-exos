#include <stdio.h>

void    triangle(int);

int     main(void)
{
    triangle(2);
    triangle(3);
    triangle(4);

    return 0;
}

void    triangle(int num_of_lines)
{
    int     i;
    int     j;

    for(i = 1; i <= num_of_lines; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
