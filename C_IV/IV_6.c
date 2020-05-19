#include <stdio.h>

int main(void)
{
	float	montant;
	float	mont_net;
	float	remise;
	
	printf("Merci d'entrer le prix de l'article desiré (minimum de 2000eur) : ");
	scanf("%f", &montant);

	if (montant >= 2000 && montant <= 5000)
	{
		remise = montant * 1 / 100;
		mont_net = montant - remise;
		
		printf("Remise : %.2f\n", remise);
		printf("Le montant net avec la remise est de : %.2f\n", mont_net);
	}
	else if (montant > 5000)
	{
		remise = montant * 2 / 100;
		mont_net = montant - remise;
		
		printf("Remise : %.2f\n", remise);
		printf("Le montant net avec la remise est de : %.2f\n", mont_net);
	}
	else
		printf("Pas de remise possible.\n");

	return(0);
}
