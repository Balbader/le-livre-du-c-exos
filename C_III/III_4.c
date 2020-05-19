#include <stdio.h>

int main(void)
{
	int	nombre_article;
	float	tva;
    	float	prix_unitaire;
    	float	prix_ht;
    	float	prix_ttc;
	
	tva = 20.0;
	
	printf("Merci d'entrer le prix unitaire d'un article: ");
	scanf("%f", &prix_unitaire);
	
	printf("Merci d'entrer le nombre d'articles souhaité: ");
	scanf("%d", &nombre_article);
	
	prix_ht = prix_unitaire * nombre_article;
	prix_ttc = (((prix_ht / 100) * tva) + prix_ht) * nombre_article;
    	printf("nombre d article\t:%6d\nprix HT\t\t\t:%9.2f\nprix TTC\t\t:%9.2f\n", nombre_article, prix_ht, prix_ttc);

	return 0;
}
