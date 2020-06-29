#include <stdio.h>

float   cal_tot(float, float, float, float);

int     main(void)
{
    float   r;
    float   g;
    float   t;
    float   i;
    float   y;

    r = 2.0;
    g = 3.0;
    t = 6.5;
    i = 2.0;
    
    y = cal_tot(r, g, t, i);
    printf("%f\n", y);

    return 0;
}

float   cal_tot(float a, float b, float c, float x)
{
    float   y;

    y = (a * x * x) + (b * x) + c;

    return y;
}
