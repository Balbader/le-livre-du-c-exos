#include <stdio.h>

#define N 5

int main(void)
{
    int     t[N] = {1, 30, 120, 20, 40};
    int     max; 
    int     pos;
    int     i;
    
    pos = 0;
    max = t[0];

    for (i = 0; i < N; i++)
    {
        if (t[i] > max)
            max = t[i];
        
        if (t[i] > t[pos])
            pos = i;
    }
    
    printf("Highest #: %d\n", max);
    printf("Postion: %d\n", pos);   
    
    return (0);
}

