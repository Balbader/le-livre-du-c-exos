#include <stdio.h>

int main(void)
{
    int    nbr_entier;
	
    do
    {
	printf("Donnez un entier positif inférieur a 100 : ");
	scanf("%d", &nbr_entier);
    }
    while (nbr_entier <= 0 || nbr_entier >= 100);
	printf("Merci pour le nombre : %d\n", nbr_entier);

    return(0);
}
