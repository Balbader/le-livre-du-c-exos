#include <stdio.h>

int main(void)
{
    float    cap_ini;
    float    cap;
    float    taux;
    int      i;

    i = 0;

    printf("donnez le capital a placer et le taux : ");
    scanf("%e%e", &cap_ini, &taux);
    cap = cap_ini;

    do
    {
        i++;
	cap = cap * (1 + taux);
	printf("capital, a l'année %d : %12.2f\n", i,  cap);
    }
    while (cap <= 2 * cap_ini);

    return (0);
}
