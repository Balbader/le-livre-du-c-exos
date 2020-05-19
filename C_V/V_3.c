#include <stdio.h>

int main()
{
	int		n;
	
	/* Using 'do...while' */

	/*
	do
	{
		printf("Donnez un nombre entier : ");
		scanf("%d", &n);
		printf("voici son carré : %d\n", n * n);
	}
	while (n != 0);
		printf ("Fin du programme");
	*/

	/* Same thing using 'while' instead of 'do...while' */

	while (n != 0)
	{
		printf("Donnez un nombre entier : ");
		scanf("%d", &n);
		printf("voici son carré : %d\n", n * n);

		if (n == 0)
			printf("Fin de programme.");
	}

	return(0);
}
