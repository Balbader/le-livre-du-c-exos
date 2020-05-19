#include <stdio.h>

/* Adaptez le programme de l'exemple (ex_5.c) de mannière qu'il fournisse
la moyennes des valeurs positives et la moyenne des valeurs négatives.
On se protegera contre le risque de division par zéro (0) */

int main()
{
    float val;          /* pour les différentes valeurs fournies */
    int nval_pos;       /* pour compter le nombre de valeurs positives fournies */
    int nval_neg;       /* pour compter le nombre de valeurs negatives fournies */
    float somme_pos;    /* pour accumuler la somme des valeurs positives */
    float somme_neg;    /* pour accumuler la somme des valeurs négatives */
    float pourcent_pos; /* pourcentage des valeurs fournies */
    float pourcent_neg; /* pourcentage des valeurs fournies */

    somme_pos = 0; /* initialisation somme des valeurs positives */
    somme_neg = 0; /* initialisation somme des valeurs négatives */
    nval_pos = 0;  /* initialisation du nombre de valeur positives fournies */
    nval_neg = 0;  /* initialisation du nombre de valeur négatives fournies */

    do
    {
        printf("donnez un entier : ");
        scanf("%f", &val);
        if (val > 0)
        {
            somme_pos = somme_pos + val;
            nval_pos++;
        }
        if (val < 0)
        {
            somme_neg = somme_neg + val;
            nval_neg++;
        }
    } while (val != 0); /* arrêt sur valeur nulle */
    if (nval_pos != 0)
    {
        pourcent_pos = somme_pos;
        pourcent_pos = pourcent_pos / nval_pos;
        printf("somme des valeurs positives : %.f\n", somme_pos);
        printf("moyenne des valeurs positives : %.f\n", pourcent_pos);
    }
    else
    {
        printf("aucune valeur positive.\n");
    }
    if (nval_neg != 0)
    {
        pourcent_neg = somme_neg;
        pourcent_neg = pourcent_neg / nval_neg;
        printf("somme des valeurs négatives : %.f\n", somme_neg);
        printf("moyenne des valeurs négatives : %.f\n", pourcent_neg);
    }
    else
    {
        printf("aucune valeur négative.\n");
    }

    return (0);
}