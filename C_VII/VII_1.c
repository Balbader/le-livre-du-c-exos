#include <stdio.h>

int main(void)
{
    int val[6];
    int k;

    val[0] = 1;
    
    for (k = 0; k < 6; k++)
        val[k] = val[k - 1] + 2;

    for (k = 0; k < 6; k++)
        printf("%d ", val[k]);
    
    printf("\n\n");

    int suite[8];
    int i;

    suite[0] = 1;
    suite[1] = 1;
    
    for (i = 2; i < 8; i++)
        suite[i] = suite[i - 1] + suite[i - 2];
    
    for (i = 0; i < 8; i++)
        printf("%d\n", suite[i]);

    return 0;
}
