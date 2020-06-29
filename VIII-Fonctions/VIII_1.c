#include <stdio.h>

int     arrondi(float);

int     main(void)
{
    float   v1;
    float   v2;
    int     p;

    v1 = 1.6;
    v2 = 2.8;

    p = arrondi(v1);
    printf("%d\n", p);

    p = arrondi(v2);
    printf("%d\n", p);

    printf("%d %d\n", arrondi(v1 + v2), arrondi(v1) + arrondi(v2));

    return 0;
}

int     arrondi(float r)
{
    float   y;
    int     n;

    y = r + 0.5;
    n = y;

    return n;
}
