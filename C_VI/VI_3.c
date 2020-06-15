#include <stdio.h>

int main(void)
{
    int     val;
    int     max_pos;
    int     min_neg;

    max_pos = 0;
    min_neg = 0;

    do
    {
        scanf("%d", &val);
        if (val > max_pos)
            max_pos = val;
        if (val < min_neg)
            min_neg = val;
    } while (val != 0);
    if (max_pos != 0)
        printf("maximum des valeurs > 0 : %d\n", max_pos);
    if (min_neg != 0)
        printf("minimum des valeurs < 0 : %d\n", min_neg);

    return 0;
}
