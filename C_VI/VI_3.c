#include <stdio.h>

/* Ecrire un programme qui lit un nombre quelconques de valeurs entières non nulles suivies, conventionnellement, d'une
   valeur nulle, et qui fournit la plus grande valeur des valeurs posiltives et la plus petite des valeurs négatives. 
   NOTE: Il n'est pas possible de choisir la première valeur comme maximum temporaire (ou come minimum temporaire..); en revanche,
   compte tenu de la nature du problème, la valeur 0 convient dans les deux cas. */

int main()
{
    int val;     /* pour les différentes valeurs fournies */
    int max_pos; /* pour le plus grand des positifs */
    int min_neg; /* pour le plus petit des negatifs */

    max_pos = 0; /* initialisation des valeurs positives à 0 */
    min_neg = 0; /* initialisation des valeurs négatifs à 0 */

    do
    {
        scanf("%d", &val);
        if (val > max_pos)
        {
            max_pos = val; /* si val > max_pos alors val > 0 */
        }
        if (val < min_neg)
        {
            min_neg = val; /* si val < min alors val < 0 */
        }

    } while (val != 0);
    if (max_pos != 0)
    {
        printf("maximum des valeurs > 0 : %d\n", max_pos);
    }
    if (min_neg != 0)
    {
        printf("minimum des valeurs < 0 : %d\n", min_neg);
    }

    return (0);
}