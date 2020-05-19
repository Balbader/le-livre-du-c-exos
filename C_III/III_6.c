#include <stdio.h>

int main()
{
	char    art;
	char    cat;
  	int     qte;

	printf("Merci d'entrer la lettre d'article suivi de la lettre de catégorie desiré: \n");
	scanf("%c %c", &art, &cat);
 	
 	printf("Merci d'entrer le nombre d'articles desiré: \n");
	scanf("%d", &qte);

	printf("articles : %c\ncatégorie : %c\nquantité : %d\n", art, cat, qte); 
	
	return 0;
}
