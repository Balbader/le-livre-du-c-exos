#include <stdio.h>

int main()
{
	float tva;
	int nombre_article;
	float prix_unitaire;
	float prix_ht;
	float prix_ttc;
	
	tva = 19.6;
	nombre_article = 5;
	prix_unitaire = 8.43;
	prix_ht = prix_unitaire * nombre_article;
	prix_ttc = (((prix_ht / 100) * tva) + prix_ht) * nombre_article;
	printf("nombre d article\t:%6d\nprix HT\t\t\t:%9.2f\nprix TTC\t\t:%9.2f\n", nombre_article, prix_ht, prix_ttc);

	return(0);
}
