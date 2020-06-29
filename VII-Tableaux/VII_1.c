#include <stdio.h>

int main(void)
{
    int     val[6];
    int     k;

    val[0] = 1;
    
    for (k = 0; k < 6; k++)
        val[k] = val[k - 1] + 2;

    for (k = 0; k < 6; k++)
        printf("%d ", val[k]);
    
    return 0;
}
