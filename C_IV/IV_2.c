#include <stdio.h>

void	empty_buffer()
{
    int c = 0;
    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
}

int main()
{
	char	reponse;
	float	rayon;

	printf("Souaitez-vous calculer le permitere de votre cercle ? ('O' pour Oui): ");
	reponse = getchar();
	empty_buffer();
	
	if (reponse == 'O')
	{
		float	perimetre;
		float	pi;

		printf("Merci d'entrer le rayon de votre cercle: ");
		scanf("%f", &rayon);
		pi = 3.14159;
		perimetre = 2 * pi * rayon;
		printf("Le perimetere de votre cerle est: %.2f\n", perimetre);
		printf("Merci de votre participation :)\n");
	}
	if (reponse != 'O')
	{	
		printf("Souhaitez-vous calculer l'aire de votre cercle ? ('O' pour Oui): ");
		reponse = getchar();
		empty_buffer();
	
		if (reponse == 'O')
		{

			float	aire;
			float	pi;

			printf("Merci d'entrer le rayon de votre cercle: ");
			scanf("%f", &rayon);
			pi = 3.14159;
			aire = (rayon * rayon) * pi;
			printf("L'aire de votre cercle est: %.2f\n", aire);
			printf("Merci de votre participation :)\n");
		}
		else
			printf("\nGo to hell you bluddy bastard '•_•'\n");
	}

	return(0);
}
