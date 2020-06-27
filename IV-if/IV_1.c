#include <stdio.h>

int main()
{

	/* Solution 1 n'utilisant que les deux variables prévues pour les deux nombres */
	
	float a;
	float b;
	
	printf("Merci d'entrer votre premier nombre flottant: ");
	scanf("%f", &a);
	
	printf("Merci d'entrer votre deuxieme nombre flottant: ");
	scanf("%f", &b);
	
	if (a < b)
		printf("a = %.2f\tb = %.2f\n", a, b);
	else
		printf("b = %.2f\ta = %.2f\n", b, a);

	return(0);
}

