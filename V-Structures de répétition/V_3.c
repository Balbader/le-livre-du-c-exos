#include <stdio.h>

int main(void)
{
    int    n;
	
    while (n != 0)
    {
	printf("Donnez un nombre entier : ");
	scanf("%d", &n);
	printf("voici son carré : %d\n", n * n);

	if (n == 0)
	    printf("Fin de programme.");
    }
    return (0);
}
