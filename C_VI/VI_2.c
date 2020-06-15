#include <stdio.h>

int main(void)
{
    int     nval_pos;
    int     nval_neg;
    float   val;
    float   somme_pos;
    float   somme_neg;
    float   pourcent_pos;
    float   pourcent_neg;
    
    somme_pos = 0;
    somme_neg = 0;
    nval_pos = 0;
    nval_neg = 0;

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
    } while (val != 0);
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
        printf("aucune valeur négative.\n");

    return (0);
}
