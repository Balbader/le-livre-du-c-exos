#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;

    printf("Merci d'entrer un premier nombre entier de votre choix: ");
    scanf("%d", &a);
	
    printf("Merci d'entrer un deuxieme nombre entier de votre choix: ");
    scanf("%d", &b);
	
    printf("Merci d'entrer un troisieme nombre entier de votre choix: ");
    scanf("%d", &c);

    if ((a < b) && (b < c))
    {
	printf("\nAffichage des données entrés par ordre decroissant:\na = %d\tb = %d\tc = %d", a, b, c);
    } 	    
    else
    {
	printf("\nAffichage des données entrés:\na = %d\tb = %d\tc = %d", a, b, c);
    }
    return(0);
}
