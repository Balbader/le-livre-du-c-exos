#include <stdio.h>
#define N 10

int main(void)
{
    float       arr[N];
    float       score;
    float       average;
    int         i;
    
    score   = 0.0;

    /*1.Enter students scores*/
    printf("Enter students score (10 max): \n");
    for (i = 0; i < N; i++)
    {   
        /*2.Take in User input*/
        scanf("%f", &arr[i]);
        
        /*3.Calculate score total*/
        score += arr[i];
    }

    /*4.Calculate average*/
    average = score / N;
    printf("\n%.1f\n\n", average);
    
    /*5.Filter all entries > average*/
    for (i = 0; i < N; i++)
    {
        if (arr[i] > average)
            printf("%.1f ", arr[i]);
    }
    
    return 0;
}
