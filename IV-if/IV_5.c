#include <stdio.h>

int main()
{
	float	a;
	float	b;
	float	racine;

	printf("Donnez les coefficients: ");
	scanf("%e %e", &a, &b);

	if (a != 0)
	{
		racine = -b / a;
		printf("solution: %e\n", racine);
	}
	else if (b == 0)
		printf("Solution indéterminée\n");
	else
		printf("Pas de solution\n");

	return(0);
}
