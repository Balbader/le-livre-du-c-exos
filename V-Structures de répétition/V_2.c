#include <stdio.h>
 
int main(void)
{
    int     nbr_entier;   
		
    printf("Donnez un entier positif inférieur a 100 : ");
	
    do
    {
	scanf("%d", &nbr_entier);
	if (nbr_entier <= 0 || nbr_entier >= 100)
		printf("SVP positif inférieur a 100 : ");
    }
    while (nbr_entier <= 0 || nbr_entier >= 100);
    printf("Merci pour le nombre : %d\n", nbr_entier);
	
    return(0);
}
